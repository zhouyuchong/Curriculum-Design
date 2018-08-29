#if !defined(AFX_LOGINERROR_H__EE5F782C_7349_44F6_858B_5E77688A94F7__INCLUDED_)
#define AFX_LOGINERROR_H__EE5F782C_7349_44F6_858B_5E77688A94F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoginError.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// LoginError dialog

class LoginError : public CDialog
{
// Construction
public:
	LoginError(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(LoginError)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LoginError)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(LoginError)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINERROR_H__EE5F782C_7349_44F6_858B_5E77688A94F7__INCLUDED_)
