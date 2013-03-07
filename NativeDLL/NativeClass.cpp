#include "stdafx.h"
#include "NativeClass.h"


NativeClass::NativeClass(void)
{
}


NativeClass::~NativeClass(void)
{
}

int NativeClass::GetWindowsVersion(int numberOfExecutions)
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