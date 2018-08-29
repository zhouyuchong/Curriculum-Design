// Admenu.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "Admenu.h"
#include "InforWrite.h"
#include "StuSearch.h"
#include "Warning.h"
#include "StuMod.h"
#include "SearchDom.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Admenu dialog


Admenu::Admenu(CWnd* pParent /*=NULL*/)
	: CDialog(Admenu::IDD, pParent)
{
	//{{AFX_DATA_INIT(Admenu)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Admenu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Admenu)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Admenu, CDialog)
	//{{AFX_MSG_MAP(Admenu)
	ON_BN_CLICKED(IDC_BUTTON1, OnStuInfWrite)
	ON_BN_CLICKED(IDC_BUTTON4, OnSearch)
	ON_BN_CLICKED(IDC_BUTTON2, OnSmartAllo)
	ON_BN_CLICKED(IDCANCEL, OnReturn)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Admenu message handlers

void Admenu::OnOK() 
{
	// TODO: Add extra validation here
	StuMod dlg;
	CDialog::OnOK();
	dlg.DoModal();
//	CDialog::OnOK();
}

void Admenu::OnStuInfWrite() 
{
	// TODO: Add your control notification handler code here
	InforWrite dlg;
	CDialog::OnOK();
	dlg.DoModal();
}

void Admenu::OnSearch() 
{
	// TODO: Add your control notification handler code here
	StuSearch dlg;
	CDialog::OnOK();
	dlg.DoModal();
}

void Admenu::OnSmartAllo() 
{
	Warning dlg;
	CDialog::OnOK();
	dlg.DoModal();

	// TODO: Add your control notification handler code here
	
}


void Admenu::OnReturn() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
}

void Admenu::OnButton3() 
{
	// TODO: Add your control notification handler code here
	SearchDom dlg;
	CDialog::OnOK();
	dlg.DoModal();
}

void Admenu::OnButton5() 
{
	// TODO: Add your control notification handler code here
	StuMod dlg;
	dlg.DoModal();
}
