#if !defined(AFX_MONEY_H__BFCA66AB_EAAB_4DBA_AF6B_E8D7BFCD84E2__INCLUDED_)
#define AFX_MONEY_H__BFCA66AB_EAAB_4DBA_AF6B_E8D7BFCD84E2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Money.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Money dialog

class Money : public CDialog
{
// Construction
public:
	Money(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Money)
	enum { IDD = IDD_DIALOG14 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Money)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Money)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MONEY_H__BFCA66AB_EAAB_4DBA_AF6B_E8D7BFCD84E2__INCLUDED_)
