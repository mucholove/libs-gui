/** <title>GSWIN32PrintInfo</title>

   <abstract>Stores information used in printing.</abstract>

   Copyright (C) 1996,1997,2004 Free Software Foundation, Inc.

   Author: Simon Frankau <sgf@frankau.demon.co.uk>
   Date: July 1997
   Author: Adam Fedor <fedor@gnu.org>
   Date: Oct 2001
   Modified for Printing Backend Support
   Author: Chad Hardin <cehardin@mac.com>
   Date: June 2004
   
   This file is part of the GNUstep GUI Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.
   If not, see <http://www.gnu.org/licenses/> or write to the 
   Free Software Foundation, 51 Franklin Street, Fifth Floor, 
   Boston, MA 02110-1301, USA.
*/ 

#ifndef _GNUstep_H_GSWIN32PrintInfo
#define _GNUstep_H_GSWIN32PrintInfo

#import <Foundation/NSCoder.h>
#import "AppKit/NSPrintInfo.h"

@interface GSWIN32PrintInfo: NSPrintInfo
{
}
@end

#endif // _GNUstep_H_GSWIN32PrintInfo
