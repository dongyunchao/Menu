// MENUDoc.h : interface of the CMENUDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MENUDOC_H__3493B9B3_B3C7_46FC_A54C_04938BD2BD44__INCLUDED_)
#define AFX_MENUDOC_H__3493B9B3_B3C7_46FC_A54C_04938BD2BD44__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMENUDoc : public CDocument
{
protected: // create from serialization only
	CMENUDoc();
	DECLARE_DYNCREATE(CMENUDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMENUDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMENUDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMENUDoc)
	afx_msg void OnTest();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUDOC_H__3493B9B3_B3C7_46FC_A54C_04938BD2BD44__INCLUDED_)
