// =============================================================================
// 							Class Specification : COXWebCtrl
// =============================================================================
//
// Header file : OXWebCtrl.h
//
// Version: 9.3
//
// /////////////////////////////////////////////////////////////////////////////
//
// Properties:
//
//	NO	Abstract class (does not have any objects)
//	YES	Derived from CObject
//	YES	Is a Cwnd.
//	YES	Two stage creation (constructor & Create())
//	NO	Has a message map
//	NO  Needs a resource (template)
//	NO	Persistent objects (saveable on disk)
//	NO	Uses exceptions
//
////////////////////////////////////////////////////////////////////////////////
//
// Desciption :
//		This class was generated by Microsoft Visual C++ v5.0 from 
//		the Microsoft Web Browser ActiveX control.
//
// Remark:
//
// Prerequisites (necessary conditions):
//		The user must have Microsoft Internet Explorer v3.x (or higher)
//		installed on his machine in order for this class to function.
//
// Limited edition:
//
/////////////////////////////////////////////////////////////////////////////

#ifndef __OXWEBCTRL_H__
#define __OXWEBCTRL_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "OXDllExt.h"

#include <docobj.h>


class OX_CLASS_DECL COXWebCtrl : public CWnd
{
// Data members -------------------------------------------------------------
public:
protected:
private:
// Member functions ---------------------------------------------------------
public:
	CLSID const& GetClsid()
		{
		static CLSID const clsid =
			{ 0xeab22ac3, 0x30c1, 0x11cf, { 0xa7, 0xeb, 0x0, 0x0, 0xc0, 0x5b, 0xae, 0xb } };
		return clsid;
		}
	// --- In  :
	// --- Out : 
	// --- Returns : A reference to the control's CLSID.
	// --- Effect : Allows the user to access the web control's OLE class 
	//				identifier if needed.

	virtual BOOL Create(LPCTSTR /* lpszClassName */,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* /* pContext = NULL */)
		{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
		}
	// --- In  : lpszClassName : The class name for the control.
	//			 lpszWindowName : The window name for the control.
	//			 dwStyle : The style to use for the control.
	//			 rect : Provides the coordinates for creating the control.
	//			 pParentWnd : Provides the parent window for the control.
	//			 nID : The dialog control identifier to use for the control.
	//			 pContext : Provides optional details for creation.
	// --- Out : 
	// --- Returns : TRUE if the control could be created, or FALSE otherwise.
	// --- Effect : Creates the control based upon the input parameters.

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
		{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
			pPersist, bStorage, bstrLicKey); 
		}
	// --- In  : lpszWindowName : The window name for the control.
	//			 dwStyle : The style to use for the control.
	//			 rect : Provides the coordinates for creating the control.
	//			 pParentWnd : Provides the parent window for the control.
	//			 nID : The dialog control identifier to use for the control.
	//			 pPersist : Provides the persistence 
	//			 bStorage : Specifies if persistence refers to OLE storage.
	//			 bstrLicKey : Provides a license key for the control (if any).
	// --- Out : 
	// --- Returns : TRUE if the control could be created, or FALSE otherwise.
	// --- Effect : Creates the control based upon the input parameters.

	void Print(DWORD dwOptions = OLECMDEXECOPT_DONTPROMPTUSER);
	// --- In  : dwOptions : Specific options for printing.
	// --- Out : 
	// --- Returns :
	// --- Effect : Prints the contents of the control's current contents
	//				in accordance with the specified options.

	void GoBack();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Navigates to the previous document.

	void GoForward();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Navigates to the next document.
	
	void GoHome();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Navigates to the user's start page.
	
	void GoSearch();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Navigates to the user's search page.
	
	void Navigate(LPCTSTR pcszURL, long lFlags, LPCTSTR pcszTargetFrameName, 
				  VARIANT* PostData, VARIANT* Headers);
	// --- In  : pcszURL : The location to which the control should navigate.
	//			 lFlags : Provides some options for how the navigation 
	//					 should proceed.
	//			 pcszTargetFrameName : String that contains the name of the 
	//							       frame in which to display the resource, 
	//							       or NULL if no named frame is targeted 
	//							       for the resource.
	//			 PostData : Address of data to send to the server if the 
	//						HTTP POST transaction is being used. 
	//			 Headers: Additional HTTP headers to send to the server 
	//					  (HTTP URLs only). The headers can specify 
	//					  such things as the action required of the 
	//					  server, the type of data being passed to the 
	//					  server, or a status code. 
	// --- Out : 
	// --- Returns :
	// --- Effect : Navigates to the specified URL.
	
	void Refresh();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Reloads the current document.
	
	void Refresh2(long lLevel);
	// --- In  : lLevel : Specifies one of the constants that are valid for the
	//					  IWebView::Refresh2 method.
	// --- Out : 
	// --- Returns :
	// --- Effect : Reloads the current document as specified by the
	//				level option.
	
	void Stop();
	// --- In  :
	// --- Out : 
	// --- Returns :
	// --- Effect : Stops the current operation in progress.
	
	LPDISPATCH GetApplication();
	// --- In  :
	// --- Out : 
	// --- Returns : Gets the OLE IDispatch interface for the container
	//				 of the web control.
	// --- Effect : 
	
	LPDISPATCH GetParent();
	// --- In  :
	// --- Out : 
	// --- Returns : Gets the OLE IDispatch interface for the container
	//				 of the web control.
	// --- Effect : 
	
	LPDISPATCH GetContainer();
	// --- In  :
	// --- Out : 
	// --- Returns : Gets the OLE IDispatch interface for the container
	//				 of the web control.
	// --- Effect : 
	
	LPDISPATCH GetDocument();
	// --- In  :
	// --- Out : 
	// --- Returns : Gets the OLE IDispatch interface for the web
	//				 control document.
	// --- Effect : 
	
	BOOL GetTopLevelContainer();
	// --- In  :
	// --- Out : 
	// --- Returns : TRUE if the object is a top-level container, or
	//				 FALSE otherwise.
	// --- Effect :
	
	CString GetType();
	// --- In  :
	// --- Out : 
	// --- Returns : The type name of the contained object.
	// --- Effect :
	
	long GetLeft();
	// --- In  :
	// --- Out : 
	// --- Returns : The left edge offset of the control.
	// --- Effect :
	
	void SetLeft(long nNewValue);
	// --- In  : nNewValue : The new left edge offset.
	// --- Out : 
	// --- Returns :
	// --- Effect : Sets the left edge offset of the control.
	
	long GetTop();
	// --- In  :
	// --- Out : 
	// --- Returns : The top edge offset of the control.
	// --- Effect :
	
	void SetTop(long nNewValue);
	// --- In  : nNewValue : The new top edge offset.
	// --- Out : 
	// --- Returns :
	// --- Effect : Sets the top edge offset of the control.
	
	long GetWidth();
	// --- In  :
	// --- Out : 
	// --- Returns : The width of the control.
	// --- Effect :
	
	void SetWidth(long nNewValue);
	// --- In  : nNewValue : The new width of the control.
	// --- Out : 
	// --- Returns :
	// --- Effect : Sets the width of the control.
	
	long GetHeight();
	// --- In  :
	// --- Out : 
	// --- Returns : The height of the control.
	// --- Effect :
	
	void SetHeight(long nNewValue);
	// --- In  : nNewValue : The new height of the control.
	// --- Out : 
	// --- Returns :
	// --- Effect : Sets the height of the control.
	
	CString GetLocationName();
	// --- In  :
	// --- Out : 
	// --- Returns : The name of the current location.
	// --- Effect :
	
	CString GetLocationURL();
	// --- In  :
	// --- Out : 
	// --- Returns : The uniform resource locator (URL) of the 
	//				 current location.
	// --- Effect :
	
	BOOL GetBusy();
	// --- In  :
	// --- Out : 
	// --- Returns : TRUE if the control is currently busy, or 
	//				 FALSE otherwise.
	// --- Effect :

protected:
	DECLARE_DYNCREATE(COXWebCtrl)
private:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // __OXWEBCTRL_H__
////////////////////////////////////////////////////////////////////////////////
