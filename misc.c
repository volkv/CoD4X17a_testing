/*
===========================================================================
    Copyright (C) 2010-2013  Ninja and TheKelm of the IceOps-Team

    This file is part of CoD4X17a-Server source code.

    CoD4X17a-Server source code is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CoD4X17a-Server source code is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
===========================================================================
*/




#include "misc.h"
#include "qcommon_io.h"
#include "g_sv_shared.h"
#include "punkbuster.h"
#include "hl2rcon.h"

char* SL_ConvertToString(unsigned int index)
{

    char** ptr = (char**)STRBUFFBASEPTR_ADDR;
    char* base = *ptr;
    return &base[ index*12 + 4];
}


void AddRedirectLocations()
{
    Com_AddRedirect(PbCapatureConsoleOutput_wrapper);

}