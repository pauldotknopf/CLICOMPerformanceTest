#pragma once
__declspec(dllexport) class NativeClass
{
public:
	__declspec(dllexport) NativeClass(void);
	__declspec(dllexport) ~NativeClass(void);
	__declspec(dllexport) int GetWindowsVersion(int numberOfExecutions);
};

