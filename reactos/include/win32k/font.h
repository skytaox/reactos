/* $Id: font.h,v 1.1.10.1 2004/07/11 11:09:58 weiden Exp $
 *
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS system libraries
 * FILE:            include/win32k/font.h
 * PURPOSE:         GDI32/Win32k font interface
 * PROGRAMMER:
 *
 */

#ifndef WIN32K_FONT_H_INCLUDED
#define WIN32K_FONT_H_INCLUDED

#include <windows.h>

typedef struct tagFONTFAMILYINFO
{
  ENUMLOGFONTEXW EnumLogFontEx;
  NEWTEXTMETRICEXW NewTextMetricEx;
  DWORD FontType;
} FONTFAMILYINFO, *PFONTFAMILYINFO;

int STDCALL NtGdiGetFontFamilyInfo(HDC Dc, LPLOGFONTW LogFont, PFONTFAMILYINFO Info, DWORD Size);
BOOL STDCALL NtGdiTranslateCharsetInfo(PDWORD Src, LPCHARSETINFO CSI, DWORD Flags);
DWORD STDCALL NtGdiGetFontData(HDC,DWORD,DWORD,LPVOID,DWORD);

#endif /* WIN32K_FONT_H_INCLUDED */
