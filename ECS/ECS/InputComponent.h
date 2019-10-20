#pragma once

#include "Component.h"
class InputComponent :public Component
{
public:
	InputComponent() :input(100, 100) {}

	std::vector<float> getInput() { return input; }
	void setPosition(int input) { this->getInput = input; }
private:
	std::vector<float> input;
};