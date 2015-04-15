#include <windows.h>
#include <tchar.h>

#include "KApp.h"

HINSTANCE KApp::m_hInst = NULL;	//GetModuleHandle(NULL);
LPTSTR KApp::m_CmdLine = NULL;
int KApp::m_CmdShow = 0;

void KApp::Init(HINSTANCE hInstance,LPTSTR lpCmdLine,int nCmdShow)
{
	m_hInst = hInstance;
	m_CmdLine = lpCmdLine;
	m_CmdShow = nCmdShow;
}
