// InforWrite.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "InforWrite.h"
#include "hdormitory.h"
#include "Admenu.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
int i=0;
/////////////////////////////////////////////////////////////////////////////
// InforWrite dialog


InforWrite::InforWrite(CWnd* pParent /*=NULL*/)
	: CDialog(InforWrite::IDD, pParent)
{
	//{{AFX_DATA_INIT(InforWrite)
	m_name = _T("");
	m_sex = _T("");
	m_school = _T("");
	m_number = _T("");
	//}}AFX_DATA_INIT
}


void InforWrite::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(InforWrite)
	DDX_Text(pDX, IDC_EDIT1, m_name);
	DDX_Text(pDX, IDC_EDIT2, m_sex);
	DDX_Text(pDX, IDC_EDIT4, m_school);
	DDX_Text(pDX, IDC_EDIT3, m_number);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(InforWrite, CDialog)
	//{{AFX_MSG_MAP(InforWrite)
	ON_BN_CLICKED(IDC_BUTTON1, OnLast)
	ON_BN_CLICKED(IDOK, OnNext)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// InforWrite message handlers

void InforWrite::OnLast() 
{
	// TODO: Add your control notification handler code here
	
}

void InforWrite::OnNext() 
{
	// TODO: Add your control notification handler code here
    UpdateData(true);
	Dormitory a;
	ofstream f1;
	f1.open("E:\\VC\\学生数据.txt",fstream::out|fstream::app);
	a.set(m_name,m_sex,m_number,m_school);
	f1.write((char*)&a,sizeof(a));
	f1.close();
	m_name=_T("");
	m_sex=_T("");
	m_number=_T("");
	m_school=_T("");
	UpdateData(false);
}


void InforWrite::OnCancel() 
{
	// TODO: Add extra cleanup here
	Admenu dlg;
	CDialog::OnOK();
	dlg.DoModal();

}
