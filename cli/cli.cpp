/*
 cli.cpp
 OSEC - Open Source Encryption Chat - A Semi-P2P Chat

 Created by Ralph-Gordon Paul on 16.04.14.
 
 -------------------------------------------------------------------------------
 GNU General Public License Version 3, 29 June 2007
 
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
 -------------------------------------------------------------------------------
 */

#include "cli.h"
#include "App.h"

void printWelcome();

int main(int argc, const char ** argv)
{
    App::sharedApp().setAppParameters(argc, argv);
    
    printWelcome();
    
    return EXIT_SUCCESS;
}

void printWelcome()
{
    std::cout
    << App::getName() << " version " << App::getVersion() << ", Copyright (c) 2014 Ralph-Gordon Paul" << std::endl
    << App::getName() << " comes with ABSOLUTELY NO WARRANTY; for details type `show w'." << std::endl
    << "This is free software, and you are welcome to redistribute it" << std::endl
    << "under certain conditions; type `show c' for details." << std::endl;
}
