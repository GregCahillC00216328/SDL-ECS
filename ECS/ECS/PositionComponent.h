#pragma once
#include "Component.h"

class PositionComponent :public Component
{
public:
	PositionComponent() :position(100,100) {}

	std::vector<float> getPosition() { return position; }
	void setPosition(std::vector<float> position) { this->position = position; }
private:
	 std::vector<float> position;
};