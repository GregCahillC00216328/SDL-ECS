#pragma once

#include <iostream>
#include "Entity.h"


class Position
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) {/*TBI*/ }
	void update() {
		std::cout << "Position Update" << std::endl;

	}
};