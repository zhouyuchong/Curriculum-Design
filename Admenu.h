#if !defined(AFX_ADMENU_H__6F5A3001_70F8_49F4_B1F4_BD4EF6786A5E__INCLUDED_)
#define AFX_ADMENU_H__6F5A3001_70F8_49F4_B1F4_BD4EF6786A5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Admenu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Admenu dialog

class Admenu : public CDialog
{
// Construction
public:
	Admenu(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Admenu)
	enum { IDD = IDD_DIALOG3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Admenu)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Admenu)
	virtual void OnOK();
	afx_msg void OnStuInfWrite();
	afx_msg void OnSearch();
	afx_msg void OnSmartAllo();
	afx_msg void OnManallo();
	afx_msg void OnReturn();
	afx_msg void OnButton3();
	afx_msg void OnButton5();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADMENU_H__6F5A3001_70F8_49F4_B1F4_BD4EF6786A5E__INCLUDED_)
