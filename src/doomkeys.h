//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//       Key definitions
//

#ifndef __DOOMKEYS__
#define __DOOMKEYS__

//
// DOOM keyboard definition.
// This is the stuff configured by Setup.Exe.
// Most key data are simple ascii (uppercased).
//
#define KEY_RIGHTARROW_D	0xae
#define KEY_LEFTARROW_D	0xac
#define KEY_UPARROW_D		0xad
#define KEY_DOWNARROW_D	0xaf
#define KEY_STRAFE_L	0xa0
#define KEY_STRAFE_R	0xa1
#define KEY_USE			0xa2
#define KEY_FIRE		0xa3
#define KEY_ESCAPE_D		27
#define KEY_ENTER_D		13
#define KEY_TAB_D			9
#define KEY_F1_D			(0x80+0x3b)
#define KEY_F2_D			(0x80+0x3c)
#define KEY_F3_D			(0x80+0x3d)
#define KEY_F4_D			(0x80+0x3e)
#define KEY_F5_D			(0x80+0x3f)
#define KEY_F6_D			(0x80+0x40)
#define KEY_F7_D			(0x80+0x41)
#define KEY_F8_D			(0x80+0x42)
#define KEY_F9_D			(0x80+0x43)
#define KEY_F10_D			(0x80+0x44)
#define KEY_F11_D			(0x80+0x57)
#define KEY_F12_D			(0x80+0x58)

#define KEY_BACKSPACE_D	0x7f
#define KEY_PAUSE_D	0xff

#define KEY_EQUALS	0x3d
#define KEY_MINUS_D	0x2d

#define KEY_RSHIFT_D	(0x80+0x36)
#define KEY_RCTRL_D	(0x80+0x1d)
#define KEY_RALT_D	(0x80+0x38)

#define KEY_LALT	KEY_RALT_D

// new keys:

#define KEY_CAPSLOCK    (0x80+0x3a)
#define KEY_NUMLOCK     (0x80+0x45)
#define KEY_SCRLCK_D      (0x80+0x46)
#define KEY_PRTSCR      (0x80+0x59)

#define KEY_HOME_D        (0x80+0x47)
#define KEY_END_D         (0x80+0x4f)
#define KEY_PGUP_D        (0x80+0x49)
#define KEY_PGDN_D        (0x80+0x51)
#define KEY_INS_D         (0x80+0x52)
#define KEY_DEL_D         (0x80+0x53)

#define KEYP_0          0
#define KEYP_1          KEY_END_D
#define KEYP_2          KEY_DOWNARROW_D
#define KEYP_3          KEY_PGDN_D
#define KEYP_4          KEY_LEFTARROW_D
#define KEYP_5          '5'
#define KEYP_6          KEY_RIGHTARROW_D
#define KEYP_7          KEY_HOME_D
#define KEYP_8          KEY_UPARROW_D
#define KEYP_9          KEY_PGUP_D

#define KEYP_DIVIDE     '/'
#define KEYP_PLUS       '+'
#define KEYP_MINUS      '-'
#define KEYP_MULTIPLY   '*'
#define KEYP_PERIOD     0
#define KEYP_EQUALS     KEY_EQUALS
#define KEYP_ENTER      KEY_ENTER_D

#endif          // __DOOMKEYS__

