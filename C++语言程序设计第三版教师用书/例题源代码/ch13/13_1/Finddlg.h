#if !defined(AFX_FINDDLG_H__CCE00E13_8AD9_4C2A_8B14_D701494A8AA8__INCLUDED_)
#define AFX_FINDDLG_H__CCE00E13_8AD9_4C2A_8B14_D701494A8AA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Finddlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Finddlg dialog

class Finddlg : public CDialog
{
// Construction
public:
	Finddlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Finddlg)
	enum { IDD = IDD_DIALOG2 };
	CString	m_str;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Finddlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Finddlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINDDLG_H__CCE00E13_8AD9_4C2A_8B14_D701494A8AA8__INCLUDED_)
