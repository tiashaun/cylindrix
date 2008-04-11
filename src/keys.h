/*
    Copyright (C) 2001 Hotwarez LLC, Goldtree Enterprises
  
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; 
    version 2 of the License.
  
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.
  
    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

// AJT TODO: keyboard is not configurable via keyboard menu...

#ifndef KEYS_H
#define KEYS_H

#include "types.h"

// Uses the global keyboard configuration & the keyboard state to look up if a given input is pressed or not.
void Get_Key_Table( input_table table );

// Returns 1 if given input is depressed.
int Check_Input_Table( int index, input_table table );

// Used to load and save keyboard configurations.
void Index_To_String( string scan_string, int index );

#endif
