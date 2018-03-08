/*
   Copyright (C) 2018 Arto Hyvättinen

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEVTOOL_H
#define DEVTOOL_H


#include <QDialog>

namespace Ui {
class DevTool;
}

/**
 * @brief Kehittäjän työkaluja
 */
class DevTool : public QDialog
{
    Q_OBJECT

public:
    explicit DevTool(QWidget *parent = 0);
    ~DevTool();

protected slots:
    void haeAsetus(const QString& asetus);
    void tallennaAsetus();
    void poistaAsetus();
    void tabMuuttui(int tab);

private:
    Ui::DevTool *ui;
};

#endif // DEVTOOL_H
