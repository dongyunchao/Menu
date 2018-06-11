// MENUView.h : interface of the CMENUView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MENUVIEW_H__5AFDE534_AB22_4FFA_AACE_BEBA96257AB7__INCLUDED_)
#define AFX_MENUVIEW_H__5AFDE534_AB22_4FFA_AACE_BEBA96257AB7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMENUView : public CView
{
protected: // create from serialization only
	CMENUView();
	DECLARE_DYNCREATE(CMENUView)

// Attributes
public:
	CMENUDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMENUView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMENUView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMENUView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MENUView.cpp
inline CMENUDoc* CMENUView::GetDocument()
   { return (CMENUDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUVIEW_H__5AFDE534_AB22_4FFA_AACE_BEBA96257AB7__INCLUDED_)
