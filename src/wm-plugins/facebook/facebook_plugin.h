/* Copyright (c) 2013, Alexander Ershov
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 * Contact e-mail: Alexander Ershov <ershav@yandex.ru>
 */

#ifndef FACEBOOK_PLUGIN_H
#define FACEBOOK_PLUGIN_H

#include <QObject>
#include <QtCore/qplugin.h>
#include "../../wm-base/plugin_interface.h"
#include "./driver/facebook_driver.h"
#include "./view/facebook_view.h"

class FacebookPlugin : public QObject, public PluginInterface
{
	Q_OBJECT
		Q_INTERFACES(PluginInterface)

public:
	FacebookPlugin();
	~FacebookPlugin();
private:
	virtual QString name();

	virtual void* getRVFSDriver();
	virtual void* getView();
	virtual void* getSettings();
	virtual QIcon* getIcon();
	virtual QString getTranslationFile(const QString& locale);
private:
	RemoteDriver::FacebookRVFSDriver* m_driver;
	Ui::FacebookView* m_view;
	QIcon* m_icon;
};


#endif // FACEBOOK_PLUGIN_H
