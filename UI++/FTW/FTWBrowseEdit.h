#pragma once

#include "FTWControl.h"

// CFTWBrowseEdit

class CFTWBrowseEdit : public CMFCEditBrowseCtrl, public CFTWControl
{
	DECLARE_DYNAMIC(CFTWBrowseEdit)

public:
	CFTWBrowseEdit();
	virtual ~CFTWBrowseEdit();

protected:
	virtual void OnBrowse();

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnEnKillfocus();
	afx_msg void OnEnSetfocus();
	afx_msg void OnEnChange();
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT /*nCtlColor*/);
};


