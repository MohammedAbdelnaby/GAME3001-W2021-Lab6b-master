#include "Agent.h"

glm::vec2 Agent::getTargetPosition() const
{
    return glm::vec2();
}

glm::vec2 Agent::getCurrentDirection() const
{
    return glm::vec2();
}

glm::vec4 Agent::getLOSColour() const
{
    return glm::vec4();
}

float Agent::getLOSDistance() const
{
    return 0.0f;
}

bool Agent::hasLOS() const
{
    return false;
}

float Agent::getCurrentHeading() const
{
    return 0.0f;
}

void Agent::setTargetPosition(glm::vec2 new_Position)
{
}

void Agent::setCurrentDirection(glm::vec2 new_Direction)
{
}

void Agent::setLOSDistance(float distance)
{
}

void Agent::setHasLOS(bool state)
{
}

void Agent::setCurrentHeading(float heading)
{
}

void Agent::setLOSColour(glm::vec4 colour)
{
}

void Agent::m_changeDirection()
{
}
