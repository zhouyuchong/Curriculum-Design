// LoginVist.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "LoginVist.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// LoginVist dialog


LoginVist::LoginVist(CWnd* pParent /*=NULL*/)
	: CDialog(LoginVist::IDD, pParent)
{
	//{{AFX_DATA_INIT(LoginVist)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void LoginVist::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(LoginVist)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(LoginVist, CDialog)
	//{{AFX_MSG_MAP(LoginVist)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LoginVist message handlers
