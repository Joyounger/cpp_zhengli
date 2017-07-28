// MFCFirstView.h : interface of the CMFCFirstView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCFIRSTVIEW_H__B5697BE1_B946_45E7_9965_DED262F848AA__INCLUDED_)
#define AFX_MFCFIRSTVIEW_H__B5697BE1_B946_45E7_9965_DED262F848AA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCFirstView : public CView
{
protected: // create from serialization only
	CMFCFirstView();
	DECLARE_DYNCREATE(CMFCFirstView)

// Attributes
public:
	CMFCFirstDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCFirstView)
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
	virtual ~CMFCFirstView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCFirstView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCFirstView.cpp
inline CMFCFirstDoc* CMFCFirstView::GetDocument()
   { return (CMFCFirstDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCFIRSTVIEW_H__B5697BE1_B946_45E7_9965_DED262F848AA__INCLUDED_)
