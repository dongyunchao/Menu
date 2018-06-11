// MENUView.cpp : implementation of the CMENUView class
//

#include "stdafx.h"
#include "MENU.h"

#include "MENUDoc.h"
#include "MENUView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMENUView

IMPLEMENT_DYNCREATE(CMENUView, CView)

BEGIN_MESSAGE_MAP(CMENUView, CView)
	//{{AFX_MSG_MAP(CMENUView)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMENUView construction/destruction

CMENUView::CMENUView()
{
	// TODO: add construction code here

}

CMENUView::~CMENUView()
{
}

BOOL CMENUView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMENUView drawing

void CMENUView::OnDraw(CDC* pDC)
{
	CMENUDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMENUView printing

BOOL CMENUView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMENUView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMENUView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMENUView diagnostics

#ifdef _DEBUG
void CMENUView::AssertValid() const
{
	CView::AssertValid();
}

void CMENUView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMENUDoc* CMENUView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMENUDoc)));
	return (CMENUDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMENUView message handlers

//DEL void CMENUView::OnTest() 
//DEL {
//DEL 	// TODO: Add your command handler code here
//DEL 	MessageBox("view clicked!");
//DEL }
