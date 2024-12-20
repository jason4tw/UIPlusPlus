// FTWBrowseEdit.cpp : implementation file
//

#include "stdafx.h"
#include "UI++.h"
#include "FTWBrowseEdit.h"


// CFTWBrowseEdit

IMPLEMENT_DYNAMIC(CFTWBrowseEdit, CMFCEditBrowseCtrl)

CFTWBrowseEdit::CFTWBrowseEdit()
	: CFTWControl(this, false)
{

}

CFTWBrowseEdit::~CFTWBrowseEdit()
{
}

BEGIN_MESSAGE_MAP(CFTWBrowseEdit, CMFCEditBrowseCtrl)
	ON_WM_CTLCOLOR_REFLECT()
	ON_CONTROL_REFLECT(EN_KILLFOCUS, &CFTWBrowseEdit::OnEnKillfocus)
	ON_CONTROL_REFLECT(EN_SETFOCUS, &CFTWBrowseEdit::OnEnSetfocus)
	ON_CONTROL_REFLECT(EN_CHANGE, &CFTWBrowseEdit::OnEnChange)
END_MESSAGE_MAP()

// CFTWBrowseEdit message handlers

HBRUSH CFTWBrowseEdit::CtlColor(CDC* pDC, UINT nCtlColor)
{
	//HBRUSH hbr = CMFCEditBrowseCtrl::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  Change any attributes of the DC here

	// TODO:  Return a different brush if the default is not desired
	//return hbr;

	return CFTWControl::CtlColor(pDC, nCtlColor);
}

void CFTWBrowseEdit::OnEnSetfocus()
{
	CFTWControl::OnEnSetfocus();
}

void CFTWBrowseEdit::OnEnKillfocus()
{
	CFTWControl::OnEnKillfocus();
}

void CFTWBrowseEdit::OnEnChange()
{
	CFTWControl::OnEnChange();
}

void CFTWBrowseEdit::OnBrowse()
{
	TRACE("Browsing");
}