/*
 App.cpp
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

#include "App.h"

App *App::_sharedInstance = nullptr;

static const char * kAppname { "OSEC - Open Source Encryption Chat" };
static const char * kAppVersion { "0.1 Alpha" };

App &App::sharedApp()
{
    if (_sharedInstance == nullptr) {
        _sharedInstance = new App();
    }
    return *_sharedInstance;
}

App::App()
{
    
}

App::~App()
{
    
}

const std::string App::getName()
{
    const std::string name { kAppname };
    return name;
}

const std::string App::getVersion()
{
    const std::string version { kAppVersion };
    return version;
}

void App::setAppParameters(int argc, const char ** argv)
{
    _argc = argc;
    _argv = const_cast<char **>(argv);
}

int App::getArgc() const
{
    return _argc;
}

char ** App::getArgv() const
{
    return _argv;
}
