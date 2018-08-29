#if !defined(AFX_SEARCHDOM_H__E2B42C73_79C8_445D_B0B0_487543592BCF__INCLUDED_)
#define AFX_SEARCHDOM_H__E2B42C73_79C8_445D_B0B0_487543592BCF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SearchDom.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SearchDom dialog

class SearchDom : public CDialog
{
// Construction
public:
	SearchDom(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SearchDom)
	enum { IDD = IDD_DIALOG11 };
	int		m_SeaDom;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SearchDom)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SearchDom)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEARCHDOM_H__E2B42C73_79C8_445D_B0B0_487543592BCF__INCLUDED_)
