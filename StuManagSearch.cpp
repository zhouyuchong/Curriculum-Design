// StuManagSearch.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "StuManagSearch.h"
#include "hdormitory.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// StuManagSearch dialog


StuManagSearch::StuManagSearch(CWnd* pParent /*=NULL*/)
	: CDialog(StuManagSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(StuManagSearch)
	m_bedone = _T("");
	m_bedtwo = _T("");
	m_bedthree = _T("");
	m_bedfour = _T("");
	m_bedfive = _T("");
	m_dom = 0;
	m_balan = 0.0;
	//}}AFX_DATA_INIT
}


void StuManagSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(StuManagSearch)
	DDX_Text(pDX, IDC_EDIT1, m_bedone);
	DDX_Text(pDX, IDC_EDIT2, m_bedtwo);
	DDX_Text(pDX, IDC_EDIT3, m_bedthree);
	DDX_Text(pDX, IDC_EDIT4, m_bedfour);
	DDX_Text(pDX, IDC_EDIT5, m_bedfive);
	DDX_Text(pDX, IDC_EDIT6, m_dom);
	DDX_Text(pDX, IDC_EDIT7, m_balan);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(StuManagSearch, CDialog)
	//{{AFX_MSG_MAP(StuManagSearch)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// StuManagSearch message handlers

void StuManagSearch::OnOK() 
{
	// TODO: Add extra validation here
	ifstream file;
	ifstream f1;
	Dormitory a[200];
	Dormitory temp;
	f1.open("e:\\VC\\StuSearchDom.txt",fstream::binary);
		f1.read((char*)&temp,sizeof(temp));
	f1.close();
	m_dom=temp.getDomNum();
	m_balan=temp.getBalance();
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
	for(int i=0;i<200;i++)
	{
		file.read((char*)&a[i],sizeof(a[i]));
		if(a[i].getDomNum()==temp.getDomNum()&&a[i].getBedNum()==1)
			m_bedone=a[i].getname();
		if(a[i].getDomNum()==temp.getDomNum()&&a[i].getBedNum()==2)
			m_bedtwo=a[i].getname();
		if(a[i].getDomNum()==temp.getDomNum()&&a[i].getBedNum()==3)
			m_bedthree=a[i].getname();
		if(a[i].getDomNum()==temp.getDomNum()&&a[i].getBedNum()==4)
			m_bedfour=a[i].getname();
		if(a[i].getDomNum()==temp.getDomNum()&&a[i].getBedNum()==5)
			m_bedfive=a[i].getname();
	}	
	file.close();	
	UpdateData(false);
}
