#pragma once
#include <iostream>
#include "Entity.h"


class ControlSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) {/*TBI*/ }
	void update() {
		std::cout << "ControlSystem Update" << std::endl;

	}
};