// MFCFirstDoc.cpp : implementation of the CMFCFirstDoc class
//

#include "stdafx.h"
#include "MFCFirst.h"

#include "MFCFirstDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstDoc

IMPLEMENT_DYNCREATE(CMFCFirstDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCFirstDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCFirstDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstDoc construction/destruction

CMFCFirstDoc::CMFCFirstDoc()
{
	// TODO: add one-time construction code here
	MFC_Message="This is an MFC program example.";  //添加的代码

}

CMFCFirstDoc::~CMFCFirstDoc()
{
}

BOOL CMFCFirstDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCFirstDoc serialization

void CMFCFirstDoc::Serialize(CArchive& ar)
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
// CMFCFirstDoc diagnostics

#ifdef _DEBUG
void CMFCFirstDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCFirstDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstDoc commands

CString CMFCFirstDoc::GetMFCMessage()
{
return MFC_Message; //添加的代码
}
