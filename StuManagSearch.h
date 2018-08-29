#if !defined(AFX_STUMANAGSEARCH_H__C3B83828_9A6A_48F7_9F92_201ADD27A05D__INCLUDED_)
#define AFX_STUMANAGSEARCH_H__C3B83828_9A6A_48F7_9F92_201ADD27A05D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StuManagSearch.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// StuManagSearch dialog

class StuManagSearch : public CDialog
{
// Construction
public:
	StuManagSearch(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(StuManagSearch)
	enum { IDD = IDD_DIALOG12 };
	CString	m_bedone;
	CString	m_bedtwo;
	CString	m_bedthree;
	CString	m_bedfour;
	CString	m_bedfive;
	int		m_dom;
	double	m_balan;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(StuManagSearch)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(StuManagSearch)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUMANAGSEARCH_H__C3B83828_9A6A_48F7_9F92_201ADD27A05D__INCLUDED_)
