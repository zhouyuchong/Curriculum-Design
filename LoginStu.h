#if !defined(AFX_LOGINSTU_H__A4FAC073_69C9_4E06_90D8_5C8A310CF866__INCLUDED_)
#define AFX_LOGINSTU_H__A4FAC073_69C9_4E06_90D8_5C8A310CF866__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoginStu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// LoginStu dialog

class LoginStu : public CDialog
{
// Construction
public:
	LoginStu(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(LoginStu)
	enum { IDD = IDD_DIALOG2 };
	CString	m_key;
	CString	m_number;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LoginStu)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(LoginStu)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINSTU_H__A4FAC073_69C9_4E06_90D8_5C8A310CF866__INCLUDED_)
