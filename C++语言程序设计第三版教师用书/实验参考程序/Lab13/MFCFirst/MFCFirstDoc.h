// MFCFirstDoc.h : interface of the CMFCFirstDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCFIRSTDOC_H__829DF5DD_0F2E_4B60_A179_09FB5AF30C31__INCLUDED_)
#define AFX_MFCFIRSTDOC_H__829DF5DD_0F2E_4B60_A179_09FB5AF30C31__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCFirstDoc : public CDocument
{
protected: // create from serialization only
	CMFCFirstDoc();
	DECLARE_DYNCREATE(CMFCFirstDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCFirstDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CString GetMFCMessage();
	virtual ~CMFCFirstDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCFirstDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CString MFC_Message;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCFIRSTDOC_H__829DF5DD_0F2E_4B60_A179_09FB5AF30C31__INCLUDED_)
