/*
 App.h
 OSEC - Open Source Encryption Chat - A Semi-P2P Chat
 
 Created by Ralph-Gordon Paul on 16.04.14.
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

#ifndef __OSEC__App__
#define __OSEC__App__

#include <iostream>
#include <string>

class App {
    
public:
    
    static App &sharedApp();
    
    static const std::string getName();
    static const std::string getVersion();
    
    void setAppParameters(int argc, const char **argv);
    
    int getArgc() const;
    char **getArgv() const;
    
private:
    static App *_sharedInstance;
    
    int _argc;
    char **_argv;
    
    App();
    ~App();
    
    App(App const &) = delete;
    App &operator=(App const &) = delete;
};

#endif /* defined(__OSEC__App__) */
