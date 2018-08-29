#if !defined(AFX_LOGINVIST_H__5F42719D_1DC4_4217_AF62_80FB4CD31934__INCLUDED_)
#define AFX_LOGINVIST_H__5F42719D_1DC4_4217_AF62_80FB4CD31934__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoginVist.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// LoginVist dialog

class LoginVist : public CDialog
{
// Construction
public:
	LoginVist(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(LoginVist)
	enum { IDD = IDD_DIALOG5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LoginVist)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(LoginVist)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINVIST_H__5F42719D_1DC4_4217_AF62_80FB4CD31934__INCLUDED_)
