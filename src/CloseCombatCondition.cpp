#include "CloseCombatCondition.h"

CloseCombatCondition::CloseCombatCondition(bool Within_Combat_Range)
{
	setWithinCombatRange(Within_Combat_Range);
	name = "Close Combat Range Condition";
}

CloseCombatCondition::~CloseCombatCondition()
= default;

void CloseCombatCondition::setWithinCombatRange(bool state)
{
	m_isWithinCombatRange = state;
	data = state;
}

bool CloseCombatCondition::Condition()
{
	return m_isWithinCombatRange;
}
