// COMManagedTest.h : Declaration of the CCOMManagedTest

#pragma once
#include "resource.h"       // main symbols



#include "COMTest_i.h"
#include "_ICOMManagedTestEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCOMManagedTest

class ATL_NO_VTABLE CCOMManagedTest :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCOMManagedTest, &CLSID_COMManagedTest>,
	public IConnectionPointContainerImpl<CCOMManagedTest>,
	public CProxy_ICOMManagedTestEvents<CCOMManagedTest>,
	public IDispatchImpl<ICOMManagedTest, &IID_ICOMManagedTest, &LIBID_COMTestLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCOMManagedTest();

DECLARE_REGISTRY_RESOURCEID(IDR_COMMANAGEDTEST)


BEGIN_COM_MAP(CCOMManagedTest)
	COM_INTERFACE_ENTRY(ICOMManagedTest)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CCOMManagedTest)
	CONNECTION_POINT_ENTRY(__uuidof(_ICOMManagedTestEvents))
END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease();

public:



	STDMETHOD(GetWindowsVersion)(LONG numberOfExecutions);
};

OBJECT_ENTRY_AUTO(__uuidof(COMManagedTest), CCOMManagedTest)
