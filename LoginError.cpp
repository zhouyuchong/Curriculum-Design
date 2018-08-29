// LoginError.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "LoginError.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// LoginError dialog


LoginError::LoginError(CWnd* pParent /*=NULL*/)
	: CDialog(LoginError::IDD, pParent)
{
	//{{AFX_DATA_INIT(LoginError)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void LoginError::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(LoginError)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(LoginError, CDialog)
	//{{AFX_MSG_MAP(LoginError)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LoginError message handlers
