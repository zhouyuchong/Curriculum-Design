#if !defined(AFX_MODKEY_H__1B9E4E70_AF56_4BB6_BE92_5E288516D804__INCLUDED_)
#define AFX_MODKEY_H__1B9E4E70_AF56_4BB6_BE92_5E288516D804__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModKey.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ModKey dialog

class ModKey : public CDialog
{
// Construction
public:
	ModKey(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ModKey)
	enum { IDD = IDD_DIALOG13 };
	CString	m_newkey;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ModKey)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ModKey)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODKEY_H__1B9E4E70_AF56_4BB6_BE92_5E288516D804__INCLUDED_)
