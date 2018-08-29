// Warning.cpp : implementation file
//

#include "stdafx.h"
#include "对话实验.h"
#include "Warning.h"
#include "hdormitory.h"
#include "Admenu.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Warning dialog


Warning::Warning(CWnd* pParent /*=NULL*/)
	: CDialog(Warning::IDD, pParent)
{
	//{{AFX_DATA_INIT(Warning)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Warning::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Warning)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Warning, CDialog)
	//{{AFX_MSG_MAP(Warning)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Warning message handlers

void Warning::OnOK() 
{
	// TODO: Add extra validation here
	Dormitory a[200];
    ifstream file;
	file.open("e:\\VC\\学生数据.txt",fstream::binary);
  	int i,n;
	n=0;
	while(!file.eof())
	{
		file.read((char*)&a[n],sizeof(a[n]));
		n++;
	}
    file.close();
	int bed1,bed2;
	int dom1,dom2;
	int floor1,floor2;
	bed1=bed2=floor1=floor2=1;
	dom1=dom2=101;
	ofstream f1;
	f1.open("E:\\VC\\学生数据.txt",fstream::out);
  	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].getxb(),"男")==0)
		{
			if((dom1-floor1*100)==35)
			{
				floor1++;
				dom1=floor1*100+1;
			}
			if(bed1==6)
			{
				bed1=1;
				dom1++;
			}
			a[i].SetDomNum(bed1,dom1);
			bed1++;
		}
		else if(strcmp(a[i].getxb(),"女")==0)
		{
			if((dom2-floor2*100)==35)
			{
				floor2++;
				dom2=floor2*100+1;
			}
			if(bed2==6)
			{
				bed2=1;
				dom2++;
			}
			a[i].SetDomNum(bed2,dom2);
			bed2++;
		}
		f1.write((char*)&a[i],sizeof(a[i]));
	}
	f1.close();
	AfxMessageBox(_T("录入完毕!"));
	Admenu dlg;
	CDialog::OnOK();
	dlg.DoModal();
}
