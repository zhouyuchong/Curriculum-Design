// StudentLogin.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "StudentLogin.h"
#include "Stumenu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// StudentLogin dialog


StudentLogin::StudentLogin(CWnd* pParent /*=NULL*/)
	: CDialog(StudentLogin::IDD, pParent)
{
	//{{AFX_DATA_INIT(StudentLogin)
	m_number = 0;
	m_key = _T("");
	//}}AFX_DATA_INIT
}


void StudentLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(StudentLogin)
	DDX_Text(pDX, IDC_EDIT1, m_number);
	DDX_Text(pDX, IDC_EDIT2, m_key);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(StudentLogin, CDialog)
	//{{AFX_MSG_MAP(StudentLogin)
	ON_BN_CLICKED(IDOK, OnStudentLogin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// StudentLogin message handlers

void StudentLogin::OnOK() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	if(m_number<=200&&m_number>=1)
	{
		if(strcmp(m_key,"zycfs0827")==0)
				Stumenu dlg;
		else
			AfxMessageBox(_T("密码错误"));
	}
	else
		AfxMessageBox(_T("用户名错误"));
}

void StudentLogin::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
