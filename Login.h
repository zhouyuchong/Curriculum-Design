#if !defined(AFX_LOGIN_H__A75E4DF6_9846_4D01_A845_A41807893DCE__INCLUDED_)
#define AFX_LOGIN_H__A75E4DF6_9846_4D01_A845_A41807893DCE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Login.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Login dialog

class Login : public CDialog
{
// Construction
public:
	Login(CWnd* pParent = NULL);   // standard constructor
// Dialog Data
	//{{AFX_DATA(Login)
	enum { IDD = IDD_DIALOG1 };
	CString	m_keyword;
	CString	m_username;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Login)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Login)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGIN_H__A75E4DF6_9846_4D01_A845_A41807893DCE__INCLUDED_)
