// MFCFirstView.cpp : implementation of the CMFCFirstView class
//

#include "stdafx.h"
#include "MFCFirst.h"

#include "MFCFirstDoc.h"
#include "MFCFirstView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView

IMPLEMENT_DYNCREATE(CMFCFirstView, CView)

BEGIN_MESSAGE_MAP(CMFCFirstView, CView)
	//{{AFX_MSG_MAP(CMFCFirstView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView construction/destruction

CMFCFirstView::CMFCFirstView()
{
	// TODO: add construction code here

}

CMFCFirstView::~CMFCFirstView()
{
}

BOOL CMFCFirstView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView drawing

void CMFCFirstView::OnDraw(CDC* pDC)
{
	CMFCFirstDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->TextOut(0,0,pDoc->GetMFCMessage()); //Ìí¼ÓµÄ´úÂë
}

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView printing

BOOL CMFCFirstView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCFirstView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCFirstView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView diagnostics

#ifdef _DEBUG
void CMFCFirstView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCFirstView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCFirstDoc* CMFCFirstView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCFirstDoc)));
	return (CMFCFirstDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCFirstView message handlers


