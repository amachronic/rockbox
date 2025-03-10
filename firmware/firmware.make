#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
# $Id$
#

INCLUDES += -I$(FIRMDIR) -I$(FIRMDIR)/export -I$(FIRMDIR)/drivers \
			-I$(FIRMDIR)/include -I$(FIRMDIR)/kernel/include
ifndef APP_TYPE
INCLUDES += -I$(FIRMDIR)/libc/include
endif

include $(FIRMDIR)/asm/asm.make

FIRMLIB_SRC += $(call preprocess, $(FIRMDIR)/SOURCES)
FIRMLIB_OBJ := $(call c2obj, $(FIRMLIB_SRC))
FIRMLIB_OBJ += $(BUILDDIR)/sysfont.o
OTHER_SRC += $(FIRMLIB_SRC)

FIRMLIB = $(BUILDDIR)/firmware/libfirmware.a

ifeq ($(SYSFONT),)
SYSFONT = 08-Schumacher-Clean
endif
SYSFONTX = $(ROOTDIR)/fonts/$(SYSFONT).bdf

CLEANOBJS += $(BUILDDIR)/sysfont.* $(BUILDDIR)/version.*

# Limits for the built-in sysfont: ASCII for bootloaders, ISO8859-1 for normal builds
ifneq (,$(findstring -DBOOTLOADER,$(EXTRA_DEFINES)))
	MAXCHAR = 127
else
	MAXCHAR = 255
endif

$(FIRMLIB): $(FIRMLIB_OBJ)
	$(SILENT)$(shell rm -f $@)
	$(call PRINTS,AR $(@F))$(AR) rcs $@ $^ >/dev/null

$(BUILDDIR)/sysfont.h: $(SYSFONTX) $(TOOLS) $(BUILDDIR)/firmware/common/config.o
	$(call PRINTS,CONVBDF $(subst $(ROOTDIR)/,,$<))$(TOOLSDIR)/convbdf -l $(MAXCHAR) -h -o $@ $<

$(BUILDDIR)/sysfont.o: $(SYSFONTX) $(BUILDDIR)/sysfont.h
	$(call PRINTS,CONVBDF $(subst $(ROOTDIR)/,,$<))$(TOOLSDIR)/convbdf -l $(MAXCHAR) -c -o $(BUILDDIR)/sysfont.c $<
	$(call PRINTS,CC $(subst $(ROOTDIR)/,,$(BUILDDIR)/sysfont.c))$(CC) $(CFLAGS) -c $(BUILDDIR)/sysfont.c -o $@

ifdef USE_LTO
$(BUILDDIR)/firmware/asm/%.o: CFLAGS += -fno-lto
$(BUILDDIR)/firmware/kernel/thread.o: CFLAGS += -fno-lto
endif

# GNU make (at least) has a bug/feature that exported variable are not available
# in the shell function (but are in recipe). Thus we need to explicitely pass
# the VERSION environement variable
SVNVERSION:=$(shell VERSION='$(VERSION)' $(TOOLSDIR)/version.sh $(ROOTDIR))
OLDSVNVERSION:=$(shell grep 'RBVERSION' $(BUILDDIR)/rbversion.h 2>/dev/null|cut -d '"' -f 2 || echo "NOREVISION")

CORE_LIBS:=$(FIRMLIB)

ifneq ($(SVNVERSION),$(OLDSVNVERSION))
.PHONY: $(BUILDDIR)/rbversion.h
endif

$(BUILDDIR)/rbversion.h:
	$(call PRINTS,GEN $(@F))$(TOOLSDIR)/genversion.sh $(BUILDDIR) $(SVNVERSION)
