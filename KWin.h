#pragma once

class KWin
{
private:
	HWND m_hWnd;
	bool Register();
	void Create();
public:
	KWin();
};
