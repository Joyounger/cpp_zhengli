// exp13View.cpp : implementation of the CExp13View class
//

#include "stdafx.h"
#include "exp13.h"
#include "expdlg.h"
#include<fstream>
#include<string>
#include"employee.h"
#include<vector>
using namespace std;

#include "exp13Doc.h"
#include "exp13View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// CExp13View

IMPLEMENT_DYNCREATE(CExp13View, CView)

BEGIN_MESSAGE_MAP(CExp13View, CView)
	//{{AFX_MSG_MAP(CExp13View)
	ON_COMMAND(ID_Input_Data, OnInputData)
	ON_COMMAND(ID_Output_Data, OnOutputData)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExp13View construction/destruction

CExp13View::CExp13View()
{
	// TODO: add construction code here

}

CExp13View::~CExp13View()
{
}

BOOL CExp13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CExp13View drawing

void CExp13View::OnDraw(CDC* pDC)
{
	CExp13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here


}

/////////////////////////////////////////////////////////////////////////////
// CExp13View printing

BOOL CExp13View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CExp13View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CExp13View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CExp13View diagnostics

#ifdef _DEBUG
void CExp13View::AssertValid() const
{
	CView::AssertValid();
}

void CExp13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExp13Doc* CExp13View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExp13Doc)));
	return (CExp13Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExp13View message handlers


void CExp13View::OnInputData() 
{
	// TODO: Add your command handler code here
	manager m1;
	technician t1;
	salesmanager sm1;
	salesman s1;

	vector <employee *> vchar;
	vchar.push_back(&m1);
	vchar.push_back(&t1);
	vchar.push_back(&sm1);
	vchar.push_back(&s1);

	expdlg ed;
	ed.DoModal();

	vector<CString> vread;
	vread.push_back(ed.m_str1);
	vread.push_back(ed.m_str2);
	vread.push_back(ed.m_str3);
	vread.push_back(ed.m_str4);

	int i;
	for(i=0;i<4;i++)
	{
		vchar[i]->SetName((char*) (LPCTSTR)vread[i]);	//��������
		vchar[i]->promote(i);	//����
	}

	t1.SetworkHours(ed.m_hours);  //���ù���ʱ��

	sm1.Setsales(ed.m_ss1);//���ñ��µ������ܶ�

	s1.Setsales(ed.m_ss2);//���ñ������۶�

	ofstream ofile("employee.txt",ios::out);	//����һ������ļ�������
	for(i=0;i<4;i++)
	{  vchar[i]->pay();   	//������н	
	   ofile<<vchar[i]->GetName()<<"���"<<vchar[i]->GetindividualEmpNo()
	   <<"����Ϊ"<<vchar[i]->Getgrade()<<"�������¹���"<<vchar[i]->GetaccumPay()
	   <<endl;
	}
	ofile.close();
	
}

class FileException {
public:
   FileException() 
      : message( "File is not created!" ) { }
   const char *what() const { return message; }
private:
   const char *message;
};


void CExp13View::OnOutputData() 
{
	ifstream infile("employee.txt",ios::in);	//����һ�������ļ�������
	try {  
		  if (!infile)
			  throw FileException();
    }
    catch ( FileException fe ) { // exception handler
         MessageBox(fe.what()); //" << fe.what() << '\n';
		 exit(0);
	 }

	//���ļ�������Ա��Ϣ
	CClientDC dc(this);
	char line[101];
	for(int i=0;i<4;i++)
	{
	infile.getline(line,100);
	CString c_str;
	c_str.Format("%s",line);  //ת��Ϊ�ַ���
	dc.TextOut(100,80,"��Ա��Ϣ����ϵͳ:");
	dc.TextOut(100,100+30*i,c_str);
	}
	infile.close();	
}
