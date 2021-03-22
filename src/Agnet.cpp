#include "Agent.h"
#include "Util.h"

Agent::Agent()
{

}

Agent::~Agent()
{

}

glm::vec2 Agent::getCurrentDirection() const
{
	return m_currentDirection;
}
glm::vec4 Agent::getLOSColour() const
{
	return m_LOSColour;
}
float Agent::getLOSDistance() const
{
	return m_LOSDistance;
}
bool Agent::hasLOS() const
{
	return m_hasLOS;
}
float Agent::getCurrentHeading() const
{
	return m_currentHeading;
}

void Agent::setTargetPosition(glm::vec2 new_Position)
{
	m_targetPosition = new_Position;
}
void Agent::setCurrentDirection(glm::vec2 new_Direction)
{
	m_currentDirection = new_Direction;
}
void Agent::setLOSDistance(float distance)
{
	m_LOSDistance = distance;
}
void Agent::setHasLOS(bool state)
{
	m_hasLOS = state;
	m_LOSColour = (m_hasLOS) ? glm::vec4(0, 1, 0, 1) : glm::vec4(1, 0, 0, 1);
}
void Agent::setCurrentHeading(float heading)
{
	m_currentHeading = heading;
	m_changeDirection();
}
void Agent::setLOSColour(glm::vec4 colour)
{
	m_LOSColour = colour;
}

void Agent::m_changeDirection()
{
	const auto x = cos(m_currentHeading * Util::Deg2Rad);
	const auto y = sin(m_currentHeading * Util::Deg2Rad);
	m_currentDirection = glm::vec2(x, y);
}

glm::vec2 Agent::getTargetPosition() const
{
	return m_targetPosition;
}
