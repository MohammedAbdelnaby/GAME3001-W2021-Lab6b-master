#pragma once
#ifndef __CLOSE_COMBAT_CONDITION__
#define __CLOSE_COMBAT_CONDITION__
#include "ConditionNode.h"

class CloseCombatCondition : public ConditionNode
{
public:
	CloseCombatCondition(bool Within_Combat_Range = false);
	virtual ~CloseCombatCondition();

	void setWithinCombatRange(bool state);


	virtual bool Condition() override;

private:
	bool m_isWithinCombatRange;
};
#endif // __CLOSE_COMBAT_CONDITION__