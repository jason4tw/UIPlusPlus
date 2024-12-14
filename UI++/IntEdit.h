#pragma once
#include "BaseEdit.h"

namespace FilterEdit
{
class CIntEdit : public CBaseEdit
{
public:
	CIntEdit ();
	virtual ~CIntEdit ();
	int GetValue () const;

private:
	static bool m_bInitialised;
	static std::wregex m_RegEx;
};
}
