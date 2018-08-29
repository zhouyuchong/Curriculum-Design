#if !defined(AFX_WARNING_H__C052636A_6D8C_4F7D_8124_CE7C2168E460__INCLUDED_)
#define AFX_WARNING_H__C052636A_6D8C_4F7D_8124_CE7C2168E460__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Warning.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Warning dialog

class Warning : public CDialog
{
// Construction
public:
	Warning(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Warning)
	enum { IDD = IDD_DIALOG5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Warning)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Warning)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WARNING_H__C052636A_6D8C_4F7D_8124_CE7C2168E460__INCLUDED_)
