// Login.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "Login.h"
#include "Admenu.h"
//#include "account.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Login dialog


Login::Login(CWnd* pParent /*=NULL*/)
	: CDialog(Login::IDD, pParent)
{
	//{{AFX_DATA_INIT(Login)
	m_keyword = _T("");
	m_username = _T("");
	//}}AFX_DATA_INIT
}


void Login::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Login)
	DDX_Text(pDX, IDC_EDIT2, m_keyword);
	DDX_Text(pDX, IDC_EDIT1, m_username);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Login, CDialog)
	//{{AFX_MSG_MAP(Login)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Login message handlers

void Login::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(true);
	if(strcmp(m_username,"001")==0)
	{
		if(strcmp(m_keyword,"000000")==0)
		{
				Admenu dlg;
			    CDialog::OnOK();
			    dlg.DoModal();
		}	
		else
		{
			AfxMessageBox(_T("密码错误"));//Cdlg.
			//OnClose();
		}
	}
	else
	{
		AfxMessageBox(_T("用户名错误"));
	}
}

void Login::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
