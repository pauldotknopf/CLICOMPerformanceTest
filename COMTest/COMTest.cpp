// COMTest.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "COMTest_i.h"
#include "xdlldata.h"


using namespace ATL;


class CCOMTestModule : public ATL::CAtlExeModuleT< CCOMTestModule >
{
public :
	DECLARE_LIBID(LIBID_COMTestLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMTEST, "{C86951F7-B51F-4AB0-A1AD-08890D799E99}")
	};

CCOMTestModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

