#include "stdafx.h"
#include "OMNativeClass.h"
#include <Windows.h>

COMNativeClass::COMNativeClass(void)
{
}


COMNativeClass::~COMNativeClass(void)
{
}


int COMNativeClass::GetWindowsVersion(int numberOfExecutions)
{
	OSVERSIONINFO  version;
	for(int x = 0;x < numberOfExecutions; x++)
	{
		ZeroMemory(&version, sizeof(OSVERSIONINFO ));
		version.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
		GetVersionEx(&version);
	}
	return version.dwBuildNumber;
}
