// ManagSearch.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "ManagSearch.h"
#include "hdormitory.h"
#include "Admenu.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ManagSearch dialog


ManagSearch::ManagSearch(CWnd* pParent /*=NULL*/)
	: CDialog(ManagSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(ManagSearch)
	m_nameone = _T("");
	m_nametwo = _T("");
	m_namethree = _T("");
	m_namefour = _T("");
	m_namefive = _T("");
	m_balan = 0;
	//}}AFX_DATA_INIT
}


void ManagSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ManagSearch)
	DDX_Text(pDX, IDC_EDIT1, m_nameone);
	DDX_Text(pDX, IDC_EDIT2, m_nametwo);
	DDX_Text(pDX, IDC_EDIT3, m_namethree);
	DDX_Text(pDX, IDC_EDIT4, m_namefour);
	DDX_Text(pDX, IDC_EDIT5, m_namefive);
	DDX_Text(pDX, IDC_EDIT6, m_balan);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ManagSearch, CDialog)
	//{{AFX_MSG_MAP(ManagSearch)
	ON_BN_CLICKED(IDC_BUTTON1, OnFlush)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ManagSearch message handlers

void ManagSearch::OnCancel() 
{
	// TODO: Add extra cleanup here
	Admenu dlg;
	CDialog::OnOK();
	dlg.DoModal();
}

void ManagSearch::OnFlush() 
{
	// TODO: Add your control notification handler code here
	
	ifstream file;
	ifstream f1;
	Dormitory a[200];
	Dormitory temp;
	f1.open("e:\\VC\\SearchDom.txt",fstream::binary);
		f1.read((char*)&temp,sizeof(temp));
	f1.close();
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
	for(int i=0;i<200;i++)
	{
		file.read((char*)&a[i],sizeof(a[i]));
		if(a[i].getDomNum()==temp.getSerchDom()&&a[i].getBedNum()==1)
			m_nameone=a[i].getname();
		if(a[i].getDomNum()==temp.getSerchDom()&&a[i].getBedNum()==2)
			m_nametwo=a[i].getname();
		if(a[i].getDomNum()==temp.getSerchDom()&&a[i].getBedNum()==3)
			m_namethree=a[i].getname();
		if(a[i].getDomNum()==temp.getSerchDom()&&a[i].getBedNum()==4)
			m_namefour=a[i].getname();
		if(a[i].getDomNum()==temp.getSerchDom()&&a[i].getBedNum()==5)
			m_namefive=a[i].getname();
		if(a[i].getDomNum()==temp.getSerchDom())
			m_balan=a[i].getBalance();
	}	
	file.close();	
	UpdateData(false);
}
