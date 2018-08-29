// LoginStu.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "LoginStu.h"
#include "Stumenu.h"
#include "hdormitory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// LoginStu dialog


LoginStu::LoginStu(CWnd* pParent /*=NULL*/)
	: CDialog(LoginStu::IDD, pParent)
{
	//{{AFX_DATA_INIT(LoginStu)
	m_key = _T("");
	m_number = _T("");
	//}}AFX_DATA_INIT
}


void LoginStu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(LoginStu)
	DDX_Text(pDX, IDC_EDIT2, m_key);
	DDX_Text(pDX, IDC_EDIT1, m_number);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(LoginStu, CDialog)
	//{{AFX_MSG_MAP(LoginStu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LoginStu message handlers

void LoginStu::OnOK() 
{
	// TODO: Add extra validation here
    ifstream file;
	Dormitory a[200];
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
	UpdateData(true);
	for(int i=0;i<200;i++)
	{
		file.read((char*)&a[i],sizeof(a[i]));
		if(strcmp(m_number,a[i].getxh())==0)
		{
			if(strcmp(m_key,a[i].getmm())==0)
			{
				ofstream f1;
				f1.open("E:\\VC\\StuSearchDom.txt",fstream::out);
				f1.write((char*)&a[i],sizeof(a[i]));
				f1.close();
				Stumenu dlg;
				CDialog::OnOK();
				dlg.DoModal();
			}
			else
				AfxMessageBox(_T("密码错误"));
		}
	}
	file.close();
	//CDialog::OnOK();
}

void LoginStu::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
