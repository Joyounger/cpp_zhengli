// exp13.h : main header file for the EXP13 application
//

#if !defined(AFX_EXP13_H__053E1D45_739A_4964_97EB_2FB9F90ED969__INCLUDED_)
#define AFX_EXP13_H__053E1D45_739A_4964_97EB_2FB9F90ED969__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CExp13App:
// See exp13.cpp for the implementation of this class
//

class CExp13App : public CWinApp
{
public:
	CExp13App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExp13App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CExp13App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXP13_H__053E1D45_739A_4964_97EB_2FB9F90ED969__INCLUDED_)
