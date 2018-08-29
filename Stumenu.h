#if !defined(AFX_STUMENU_H__C178BA1B_44C4_4640_9261_800F48E60E43__INCLUDED_)
#define AFX_STUMENU_H__C178BA1B_44C4_4640_9261_800F48E60E43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Stumenu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Stumenu dialog

class Stumenu : public CDialog
{
// Construction
public:
	Stumenu(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Stumenu)
	enum { IDD = IDD_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Stumenu)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Stumenu)
	virtual void OnCancel();
	afx_msg void OnShowPer();
	afx_msg void OnSearchManag();
	afx_msg void OnButton3();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUMENU_H__C178BA1B_44C4_4640_9261_800F48E60E43__INCLUDED_)
