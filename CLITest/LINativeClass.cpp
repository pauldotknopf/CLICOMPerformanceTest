#include "stdafx.h"
#include "LINativeClass.h"
#include <Windows.h>

CLINativeClass::CLINativeClass(void)
{
}


CLINativeClass::~CLINativeClass(void)
{
}

int CLINativeClass::GetWindowsVersion(int numberOfExecutions)
{
	OSVERSIONINFO osvi;
   
	for(int x = 0; x < numberOfExecutions; x++)
	{
		ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
		osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
		GetVersionEx(&osvi);
	}
    
	return osvi.dwBuildNumber;
}