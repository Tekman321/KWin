#pragma once

static class KApp
{
public:
	static HINSTANCE m_hInst;
	static LPTSTR m_CmdLine;
	static int m_CmdShow;

	static void Init(HINSTANCE hInstance,LPTSTR lpCmdLine,int nCmdShow);
};
