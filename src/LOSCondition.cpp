#include "LOSCondition.h"

LOSCondition::LOSCondition(bool LOS)
{
	setLOS(LOS);
	name = "LOS condition";
}

LOSCondition::~LOSCondition()
= default;

void LOSCondition::setLOS(bool state)
{
	m_hasLOS = state;
	data = state;
}

bool LOSCondition::Condition()
{
	return m_hasLOS;
}
