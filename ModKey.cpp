// ModKey.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "ModKey.h"
#include "hdormitory.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ModKey dialog


ModKey::ModKey(CWnd* pParent /*=NULL*/)
	: CDialog(ModKey::IDD, pParent)
{
	//{{AFX_DATA_INIT(ModKey)
	m_newkey = _T("");
	//}}AFX_DATA_INIT
}


void ModKey::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ModKey)
	DDX_Text(pDX, IDC_EDIT1, m_newkey);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ModKey, CDialog)
	//{{AFX_MSG_MAP(ModKey)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ModKey message handlers

void ModKey::OnOK() 
{
	// TODO: Add extra validation here
	ifstream f1;
	ofstream f2;
	Dormitory temp;
	f1.open("e:\\VC\\StuSearchDom.txt",fstream::binary);
		f1.read((char*)&temp,sizeof(temp));
	f1.close();
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
	f2.open("E:\\VC\\学生数据.txt",fstream::out);
	UpdateData(true);
	for(i=0;i<n;i++)
	{
		if(strcmp(temp.getxh(),a[i].getxh())==0)
			a[i].setkeyword(m_newkey);
		f2.write((char*)&a[i],sizeof(a[i]));
	}
	f2.close();
	AfxMessageBox(_T("修改完毕!"));
}
