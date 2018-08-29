#if !defined(AFX_INFORWRITE_H__7748A2B3_5BE5_4802_937D_158EAD90319B__INCLUDED_)
#define AFX_INFORWRITE_H__7748A2B3_5BE5_4802_937D_158EAD90319B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// InforWrite.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// InforWrite dialog

class InforWrite : public CDialog
{
// Construction
public:
	InforWrite(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(InforWrite)
	enum { IDD = IDD_DIALOG6 };
	CString	m_name;
	CString	m_sex;
	CString	m_school;
	CString	m_number;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(InforWrite)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(InforWrite)
	afx_msg void OnLast();
	afx_msg void OnNext();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFORWRITE_H__7748A2B3_5BE5_4802_937D_158EAD90319B__INCLUDED_)
