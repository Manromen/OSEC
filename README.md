OSEC
====
Open Source Encryption Chat

Installation
=======
#### Dependencies ####
Please install the following dependencies before using CMake or QtCreator:
* RGP-Log: https://github.com/Manromen/rgp-log
* RGP-Chord: https://github.com/Manromen/rgp-chord

#### CMake ####
For the CLI (Command Line Interface), there is a provided CMake configure file.  
On Unix you can use the following example commands (from within the project folder):  
```
mkdir build
cd build
cmake -i ..
make
sudo make install
```

#### QtCreator ####
You have to install QtCreator Version 5.2.1 or newer (http://qt-project.org/downloads).  
Open the qt-project (qt/osec.pro). You can now build the project.

LICENSE
====
GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007

Copyright (c) 2014 Ralph-Gordon Paul. All rights reserved.

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/.
