#if !defined(AFX_MANAGSEARCH_H__E4E119CE_1C1D_4D52_9C3E_907C8FE76327__INCLUDED_)
#define AFX_MANAGSEARCH_H__E4E119CE_1C1D_4D52_9C3E_907C8FE76327__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ManagSearch.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ManagSearch dialog

class ManagSearch : public CDialog
{
// Construction
public:
	ManagSearch(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ManagSearch)
	enum { IDD = IDD_DIALOG10 };
	CString	m_nameone;
	CString	m_nametwo;
	CString	m_namethree;
	CString	m_namefour;
	CString	m_namefive;
	int		m_balan;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ManagSearch)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ManagSearch)
	virtual void OnCancel();
	afx_msg void OnFlush();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MANAGSEARCH_H__E4E119CE_1C1D_4D52_9C3E_907C8FE76327__INCLUDED_)
