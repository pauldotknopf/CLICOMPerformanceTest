#include "stdafx.h"
#include "LIManagedTest.h"
#include "LINativeClass.h"

CLINativeClass *nativeClass = nullptr;

CLIManagedTest::CLIManagedTest(void)
{
	nativeClass = new CLINativeClass();
}

CLIManagedTest::~CLIManagedTest(void)
{
	delete nativeClass;
	nativeClass = nullptr;
}


int CLIManagedTest::GetWindowsVersion(int numberofExecutions)
{
	return nativeClass->GetWindowsVersion(numberofExecutions);
}
