#pragma once
#ifndef __RADIUS_CONDITION__
#define __RADIUS_CONDITION__
#include "ConditionNode.h"

class RadiusCondition : public ConditionNode
{
public:
	RadiusCondition(bool Within_radius = false);
	virtual ~RadiusCondition();

	void setWithinRadius(bool state);


	virtual bool Condition() override;

private:
	bool m_isWithinRadius;
};
#endif // __RADIUS_CONDITION__