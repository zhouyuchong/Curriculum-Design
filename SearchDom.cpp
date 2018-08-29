// SearchDom.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "SearchDom.h"
#include "ManagSearch.h"
#include "hdormitory.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SearchDom dialog


SearchDom::SearchDom(CWnd* pParent /*=NULL*/)
	: CDialog(SearchDom::IDD, pParent)
{
	//{{AFX_DATA_INIT(SearchDom)
	m_SeaDom = 0;
	//}}AFX_DATA_INIT
}


void SearchDom::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SearchDom)
	DDX_Text(pDX, IDC_EDIT1, m_SeaDom);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SearchDom, CDialog)
	//{{AFX_MSG_MAP(SearchDom)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SearchDom message handlers

void SearchDom::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(true);
	ofstream f1;
	Dormitory temp;
	temp.setSerchDom(m_SeaDom);
	f1.open("E:\\VC\\SearchDom.txt",fstream::out);
	f1.write((char*)&temp,sizeof(temp));
	f1.close();
	ManagSearch dlg;
	CDialog::OnOK();
	dlg.DoModal();
}
