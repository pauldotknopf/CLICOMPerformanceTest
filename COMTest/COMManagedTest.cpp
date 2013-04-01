// COMManagedTest.cpp : Implementation of CCOMManagedTest

#include "stdafx.h"
#include "COMManagedTest.h"
#include "OMNativeClass.h"

COMNativeClass *nativeClass = nullptr;

CCOMManagedTest::CCOMManagedTest()
{
	nativeClass = new COMNativeClass();
}

void CCOMManagedTest::FinalRelease()
{
	delete nativeClass;
	nativeClass = nullptr;
}


STDMETHODIMP CCOMManagedTest::GetWindowsVersion(LONG numberOfExecutions)
{
	nativeClass->GetWindowsVersion(numberOfExecutions);
	return S_OK;
}
