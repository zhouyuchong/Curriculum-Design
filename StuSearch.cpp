// StuSearch.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "StuSearch.h"
#include "hdormitory.h"
#include "Admenu.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// StuSearch dialog


StuSearch::StuSearch(CWnd* pParent /*=NULL*/)
	: CDialog(StuSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(StuSearch)
	m_searchnum = _T("");
	m_searchname = _T("");
	m_searchsch = _T("");
	m_Dom = 0;
	m_Bed = 0;
	//}}AFX_DATA_INIT
}


void StuSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(StuSearch)
	DDX_Text(pDX, IDC_EDIT1, m_searchnum);
	DDX_Text(pDX, IDC_EDIT2, m_searchname);
	DDX_Text(pDX, IDC_EDIT3, m_searchsch);
	DDX_Text(pDX, IDC_EDIT4, m_Dom);
	DDX_Text(pDX, IDC_EDIT5, m_Bed);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(StuSearch, CDialog)
	//{{AFX_MSG_MAP(StuSearch)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// StuSearch message handlers

void StuSearch::OnOK() 
{
	// TODO: Add extra validation here
    ifstream file;
	Dormitory a[200];
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
	UpdateData(true);
	for(int i=0;i<200;i++)
	{
		file.read((char*)&a[i],sizeof(a[i]));
		if(strcmp(m_searchname,a[i].getxh())==0)
		{
			m_searchname=a[i].getxh();
			m_searchnum=a[i].getname();
			m_searchsch=a[i].getxy();
			m_Dom=a[i].getDomNum();
			m_Bed=a[i].getBedNum();
			UpdateData(false);
			break;
		}
		if(i==199)
			AfxMessageBox(_T("查无此人!"));
	}
	file.close();
//	CDialog::OnOK();
}

void StuSearch::OnCancel() 
{
	// TODO: Add extra cleanup here
	Admenu dlg;
	CDialog::OnOK();
	dlg.DoModal();

}
