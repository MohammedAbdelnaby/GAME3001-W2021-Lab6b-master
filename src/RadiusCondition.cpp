#include "RadiusCondition.h"

RadiusCondition::RadiusCondition(bool Within_radius)
{
    setWithinRadius(Within_radius);
    name = "Radius Condition";
}

RadiusCondition::~RadiusCondition()
= default;

void RadiusCondition::setWithinRadius(bool state)
{
    m_isWithinRadius = state;
    data = state;
}

bool RadiusCondition::Condition()
{
    return m_isWithinRadius;
}
