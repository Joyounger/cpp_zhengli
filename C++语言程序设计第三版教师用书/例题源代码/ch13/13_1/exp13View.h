// exp13View.h : interface of the CExp13View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXP13VIEW_H__753F0CAC_02F1_4E82_A257_B54C3256A716__INCLUDED_)
#define AFX_EXP13VIEW_H__753F0CAC_02F1_4E82_A257_B54C3256A716__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CExp13View : public CView
{
protected: // create from serialization only
	CExp13View();
	DECLARE_DYNCREATE(CExp13View)

// Attributes
public:
	CExp13Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExp13View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CExp13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CExp13View)
	afx_msg void OnInputData();
	afx_msg void OnOutputData();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in exp13View.cpp
inline CExp13Doc* CExp13View::GetDocument()
   { return (CExp13Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXP13VIEW_H__753F0CAC_02F1_4E82_A257_B54C3256A716__INCLUDED_)
