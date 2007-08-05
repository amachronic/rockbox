/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 *   Copyright (C) 2007 by Dominik Wenger
 *   $Id: installtalkwindow.h 14151 2007-08-02 22:27:51Z domonoky $
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

#ifndef INSTALLTALKWINDOW_H
#define INSTALLTALKWINDOW_H

#include <QtGui>

#include <QSettings>

#include "ui_installtalkfrm.h"
#include "progressloggergui.h"
#include "talkfile.h"

class InstallTalkWindow : public QDialog
{
    Q_OBJECT
    public:
    	InstallTalkWindow(QWidget *parent = 0);
        void setUserSettings(QSettings*);
        void setDeviceSettings(QSettings*);

    public slots:
        void accept(void);

    private slots:
    	void browseFolder(void);
    	void browseTTS(void);
    	void browseEncoder(void);
        
    	void setTalkFolder(QString folder);
    	void setTTSExec(QString path);
    	void setEncoderExec(QString path);
    	
    	void setEncoderOptions(int index);
    	void setTTSOptions(int index);
    	void setEncoderOptions(QString options);
    	void setTTSOptions(QString options);
    	
    private:
    	TalkFileCreator* talkcreator;
        Ui::InstallTalkFrm ui;
        ProgressLoggerGui* logger;
        QSettings *devices;
        QSettings *userSettings;

};


#endif
