// expdlg.cpp : implementation file
//

#include "stdafx.h"
#include "exp13.h"
#include "expdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// expdlg dialog


expdlg::expdlg(CWnd* pParent /*=NULL*/)
	: CDialog(expdlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(expdlg)
	m_str1 = _T("");
	m_str2 = _T("");
	m_str3 = _T("");
	m_str4 = _T("");
	m_hours = 0;
	m_ss1 = 0.0f;
	m_ss2 = 0.0f;
	//}}AFX_DATA_INIT
}


void expdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(expdlg)
	DDX_Text(pDX, IDC_EDIT1, m_str1);
	DDX_Text(pDX, IDC_EDIT2, m_str2);
	DDX_Text(pDX, IDC_EDIT3, m_str3);
	DDX_Text(pDX, IDC_EDIT4, m_str4);
	DDX_Text(pDX, IDC_EDIT5, m_hours);
	DDX_Text(pDX, IDC_EDIT6, m_ss1);
	DDX_Text(pDX, IDC_EDIT7, m_ss2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(expdlg, CDialog)
	//{{AFX_MSG_MAP(expdlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// expdlg message handlers

void expdlg::OnOK() 
{
	// TODO: Add extra validation here
	CDialog::OnOK();
}

void expdlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
