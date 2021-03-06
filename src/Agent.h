#pragma once
#ifndef __AGENT__
#define __AGENT__
#include "DisplayObject.h"
#include <glm/vec4.hpp>

class Agent  : public DisplayObject
{
public:
	Agent();
	~Agent();

	// Inherited via GameObject
	void draw() override = 0;
	void update() override = 0;
	void clean() override= 0;


	// getters
	glm::vec2 getTargetPosition() const;
	glm::vec2 getCurrentDirection() const;
	glm::vec4 getLOSColour() const;
	float getLOSDistance() const;
	bool hasLOS() const;
	float getCurrentHeading() const;

	// setters
	void setTargetPosition(glm::vec2 new_Position);
	void setCurrentDirection(glm::vec2 new_Direction);
	void setLOSDistance(float distance);
	void setHasLOS(bool state);
	void setCurrentHeading(float heading);
	void setLOSColour(glm::vec4 colour);

private:
	// steering behaviours

	void m_changeDirection();
	float m_currentHeading;
	glm::vec2 m_currentDirection;
	glm::vec2 m_targetPosition;

	// LOS
	float m_LOSDistance;
	bool m_hasLOS;
	glm::vec4 m_LOSColour;
};
#endif // __AGENT__