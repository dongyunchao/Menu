// MENU.h : main header file for the MENU application
//

#if !defined(AFX_MENU_H__9108D319_D826_47B3_BE65_1546EC255BA5__INCLUDED_)
#define AFX_MENU_H__9108D319_D826_47B3_BE65_1546EC255BA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMENUApp:
// See MENU.cpp for the implementation of this class
//

class CMENUApp : public CWinApp
{
public:
	CMENUApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMENUApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMENUApp)
	afx_msg void OnAppAbout();
	afx_msg void OnTest();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENU_H__9108D319_D826_47B3_BE65_1546EC255BA5__INCLUDED_)
