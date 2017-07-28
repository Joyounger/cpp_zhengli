// MFCFirst.h : main header file for the MFCFIRST application
//

#if !defined(AFX_MFCFIRST_H__C390FC8C_E821_4619_A5C7_0DF0B1EDBC58__INCLUDED_)
#define AFX_MFCFIRST_H__C390FC8C_E821_4619_A5C7_0DF0B1EDBC58__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstApp:
// See MFCFirst.cpp for the implementation of this class
//

class CMFCFirstApp : public CWinApp
{
public:
	CMFCFirstApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCFirstApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCFirstApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCFIRST_H__C390FC8C_E821_4619_A5C7_0DF0B1EDBC58__INCLUDED_)
