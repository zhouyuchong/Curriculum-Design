#if !defined(AFX_STUDENTLOGIN_H__5D65F6A3_E4B6_4253_949B_F466A9FA265D__INCLUDED_)
#define AFX_STUDENTLOGIN_H__5D65F6A3_E4B6_4253_949B_F466A9FA265D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StudentLogin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// StudentLogin dialog

class StudentLogin : public CDialog
{
// Construction
public:
	StudentLogin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(StudentLogin)
	enum { IDD = IDD_DIALOG2 };
	int		m_number;
	CString	m_key;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(StudentLogin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(StudentLogin)
	afx_msg void OnStudentLogin();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTLOGIN_H__5D65F6A3_E4B6_4253_949B_F466A9FA265D__INCLUDED_)
