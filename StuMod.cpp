// StuMod.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "StuMod.h"
#include "hdormitory.h"
#include "Admenu.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// StuMod dialog


StuMod::StuMod(CWnd* pParent /*=NULL*/)
	: CDialog(StuMod::IDD, pParent)
{
	//{{AFX_DATA_INIT(StuMod)
	m_modNum = _T("");
	m_ModDom = 101;
	m_ModBed = 1;
	//}}AFX_DATA_INIT
}


void StuMod::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(StuMod)
	DDX_Text(pDX, IDC_EDIT1, m_modNum);
	DDX_Text(pDX, IDC_EDIT5, m_ModDom);
	DDX_Text(pDX, IDC_EDIT6, m_ModBed);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(StuMod, CDialog)
	//{{AFX_MSG_MAP(StuMod)
	ON_EN_CHANGE(IDC_EDIT5, OnChangeEdit5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// StuMod message handlers

void StuMod::OnOK() 
{
	// TODO: Add extra validation here
     ifstream file;
	Dormitory a[200];
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
	int i,n;
	n=0;
	while(!file.eof())
	{
		file.read((char*)&a[n],sizeof(a[n]));
		n++;
	}
	file.close();
	ofstream f1;
	f1.open("E:\\VC\\学生数据.txt",fstream::out);
	UpdateData(true);
	for(i=0;i<n;i++)
	{
		if(strcmp(m_modNum,a[i].getxh())==0)
			a[i].SetDomNum(m_ModBed,m_ModDom);
		f1.write((char*)&a[i],sizeof(a[i]));
	}
	f1.close();
	AfxMessageBox(_T("修改完毕!"));
//	CDialog::OnOK();
}

void StuMod::OnChangeEdit5() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void StuMod::OnCancel() 
{
	// TODO: Add extra cleanup here
	Admenu dlg;
	CDialog::OnOK();
	dlg.DoModal();
}
