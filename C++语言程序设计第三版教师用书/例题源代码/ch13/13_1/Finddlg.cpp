// Finddlg.cpp : implementation file
//

#include "stdafx.h"
#include "exp13.h"
#include "Finddlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Finddlg dialog


Finddlg::Finddlg(CWnd* pParent /*=NULL*/)
	: CDialog(Finddlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Finddlg)
	m_str = _T("");
	//}}AFX_DATA_INIT
}


void Finddlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Finddlg)
	DDX_Text(pDX, IDC_EDIT1, m_str);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Finddlg, CDialog)
	//{{AFX_MSG_MAP(Finddlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Finddlg message handlers
