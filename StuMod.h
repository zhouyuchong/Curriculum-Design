#if !defined(AFX_STUMOD_H__C74685C9_CA8D_4330_B39F_459C97423C12__INCLUDED_)
#define AFX_STUMOD_H__C74685C9_CA8D_4330_B39F_459C97423C12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StuMod.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// StuMod dialog

class StuMod : public CDialog
{
// Construction
public:
	StuMod(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(StuMod)
	enum { IDD = IDD_DIALOG8 };
	CString	m_modNum;
	CString	m_showname;
	int		m_showDom;
	int		m_showBed;
	int		m_ModDom;
	int		m_ModBed;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(StuMod)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(StuMod)
	virtual void OnOK();
	afx_msg void OnChangeEdit5();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUMOD_H__C74685C9_CA8D_4330_B39F_459C97423C12__INCLUDED_)
