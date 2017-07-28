// exp13Doc.cpp : implementation of the CExp13Doc class
//

#include "stdafx.h"
#include "exp13.h"

#include "exp13Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExp13Doc

IMPLEMENT_DYNCREATE(CExp13Doc, CDocument)

BEGIN_MESSAGE_MAP(CExp13Doc, CDocument)
	//{{AFX_MSG_MAP(CExp13Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExp13Doc construction/destruction

CExp13Doc::CExp13Doc()
{
	// TODO: add one-time construction code here

}

CExp13Doc::~CExp13Doc()
{
}

BOOL CExp13Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CExp13Doc serialization

void CExp13Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CExp13Doc diagnostics

#ifdef _DEBUG
void CExp13Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExp13Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExp13Doc commands
