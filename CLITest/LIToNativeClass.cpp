#include "stdafx.h"
#include "LIToNativeClass.h"
#include "NativeClass.h"

NativeClass *nativeClass = nullptr;

CLIToNativeClass::CLIToNativeClass(void)
{
	nativeClass = new NativeClass();
}


CLIToNativeClass::~CLIToNativeClass(void)
{
	delete nativeClass;
	nativeClass = nullptr;
}

int CLIToNativeClass::GetWindowsVersion(int numberOfExecutions)
{
	return nativeClass->GetWindowsVersion(numberOfExecutions);
}