#include <windows.h>
#include <tchar.h>

#include "KWin.h"

#define	DEFAULT_CLASSNAME	_T("KWIN")

bool KWin::Register()
{
	WNDCLASSEX wex;

	memset(&wex,0,sizeof(WNDCLASSEX));
	wex.cbSize = sizeof(WNDCLASSEX);
	wex.style = CS_HREDRAW|CS_VREDRAW;
	wex.lpfnWndProc = ;
	wex.hInstance = KApp::m_hInst;
	wex.lpszClassName = DEFAULT_CLASSNAME;

	return RegisterClassEx(&wex) != 0;
}

KWin::KWin()
{
	if(KApp::m_hInst == NULL)
		throw 
}
