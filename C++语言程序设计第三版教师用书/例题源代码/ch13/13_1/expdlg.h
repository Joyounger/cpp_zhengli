#if !defined(AFX_EXPDLG_H__E1F62DDF_E670_42FA_B432_5296384F937E__INCLUDED_)
#define AFX_EXPDLG_H__E1F62DDF_E670_42FA_B432_5296384F937E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// expdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// expdlg dialog

class expdlg : public CDialog
{
// Construction
public:
	CString ipstr;
	expdlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(expdlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_str1;
	CString	m_str2;
	CString	m_str3;
	CString	m_str4;
	int		m_hours;
	float	m_ss1;
	float	m_ss2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(expdlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(expdlg)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXPDLG_H__E1F62DDF_E670_42FA_B432_5296384F937E__INCLUDED_)
