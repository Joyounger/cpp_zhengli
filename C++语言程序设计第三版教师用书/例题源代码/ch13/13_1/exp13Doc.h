// exp13Doc.h : interface of the CExp13Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXP13DOC_H__DC34B81D_648D_4478_972B_90C2821E654A__INCLUDED_)
#define AFX_EXP13DOC_H__DC34B81D_648D_4478_972B_90C2821E654A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CExp13Doc : public CDocument
{
protected: // create from serialization only
	CExp13Doc();
	DECLARE_DYNCREATE(CExp13Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExp13Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CExp13Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CExp13Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXP13DOC_H__DC34B81D_648D_4478_972B_90C2821E654A__INCLUDED_)
