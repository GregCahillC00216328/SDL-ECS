#pragma once
#include <iostream>
#include "Entity.h"


class HealthSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e){/*TBI*/ }
	void update() {
		std::cout << "HealthSystem Update" << std::endl;

	}
};