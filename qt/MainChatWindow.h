/*
 MainChatWindow.h
 OSEC - Open Source Encryption Chat - A Semi-P2P Chat

 Created by Ralph-Gordon Paul on 21.04.2014.
 Copyright (c) 2014 Ralph-Gordon Paul. All rights reserved.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software Foundation,
 Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef MAINCHATWINDOW_H
#define MAINCHATWINDOW_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class MainChatWindow;
}

class MainChatWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainChatWindow(QWidget *parent = 0);
    ~MainChatWindow();

private:
    Ui::MainChatWindow *ui;
};

#endif // MAINCHATWINDOW_H
