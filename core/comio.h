/*
  Copyright notice
  ================
  
  Copyright (C) 2010 - 2013
      Lorenzo  Martignoni <martignlo@gmail.com>
      Roberto  Paleari    <roberto.paleari@gmail.com>
      Aristide Fattori    <joystick@security.di.unimi.it>
      Mattia   Pagnozzi   <pago@security.di.unimi.it>
  
  This program is free software: you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation, either version 3 of the License, or (at your option) any later
  version.
  
  HyperDbg is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
  A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License along with
  this program. If not, see <http://www.gnu.org/licenses/>.
  
*/

#ifndef _PILL_COMIO_H
#define _PILL_COMIO_H

#define COM_PORT_IRQ                    0x004
#define COM_PORT_ADDRESS                0x3f8

#include "common.h"
#include "types.h"

/* COM level communication */
void  ComInit(void);
void  ComPrint(const char* fmt, ...) asm("_ComPrint");
Bit8u ComIsInitialized(void);

/* Hardware port level communication */
void  PortInit(void);
void  PortSendByte(Bit8u b);
Bit8u PortRecvByte(void);

#endif	/* _PILL_COMIO_H */
