#pragma once

#include "Entity.h"
#include <iostream>


class RenderSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) {/*TBI*/ }
	void update() {
		std::cout << "RenderSystem Update" << std::endl;

	}
};