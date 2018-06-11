// MENUDoc.cpp : implementation of the CMENUDoc class
//

#include "stdafx.h"
#include "MENU.h"

#include "MENUDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMENUDoc

IMPLEMENT_DYNCREATE(CMENUDoc, CDocument)

BEGIN_MESSAGE_MAP(CMENUDoc, CDocument)
	//{{AFX_MSG_MAP(CMENUDoc)
	ON_COMMAND(IDM_TEST, OnTest)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMENUDoc construction/destruction

CMENUDoc::CMENUDoc()
{
	// TODO: add one-time construction code here

}

CMENUDoc::~CMENUDoc()
{
}

BOOL CMENUDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMENUDoc serialization

void CMENUDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMENUDoc diagnostics

#ifdef _DEBUG
void CMENUDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMENUDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMENUDoc commands

void CMENUDoc::OnTest() 
{
	// TODO: Add your command handler code here
	AfxMessageBox("Doc clicked");
}
