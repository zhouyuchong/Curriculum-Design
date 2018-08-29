// Money.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "Money.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Money dialog


Money::Money(CWnd* pParent /*=NULL*/)
	: CDialog(Money::IDD, pParent)
{
	//{{AFX_DATA_INIT(Money)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Money::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Money)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Money, CDialog)
	//{{AFX_MSG_MAP(Money)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Money message handlers
