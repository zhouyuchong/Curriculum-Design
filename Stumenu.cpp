// Stumenu.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "Stumenu.h"
#include "StuManagSearch.h"
#include "ModKey.h"
#include "Money.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Stumenu dialog


Stumenu::Stumenu(CWnd* pParent /*=NULL*/)
	: CDialog(Stumenu::IDD, pParent)
{
	//{{AFX_DATA_INIT(Stumenu)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Stumenu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Stumenu)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Stumenu, CDialog)
	//{{AFX_MSG_MAP(Stumenu)
	ON_BN_CLICKED(IDC_BUTTON1, OnSearchManag)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Stumenu message handlers

void Stumenu::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}


void Stumenu::OnSearchManag() 
{
	// TODO: Add your control notification handler code here
	StuManagSearch dlg;
	dlg.DoModal();
}

void Stumenu::OnButton3() 
{
	// TODO: Add your control notification handler code here
	ModKey dlg;
	dlg.DoModal();
}

void Stumenu::OnOK() 
{
	// TODO: Add extra validation here
	Money dlg;
	dlg.DoModal();
	
}
