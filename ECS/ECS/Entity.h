#pragma once
#include "Component.h"
class Entity
{
	int id = 0;
public:
	Entity() {};
	
	void addComponent(Component c) { components.push_back(c); }
	void removeComponent(Component c) {/*TBI*/ }
	std::vector<Component> getComponents() { return components; }
private:
	std::vector<Component> components;
};



