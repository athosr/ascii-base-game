#ifndef RENDERER_H
#define RENDERER_H

#include "Entity.h"

#include <vector>

class Renderer
{
public:
	void render(std::vector<Entity>& entity);
	void printEntities(int x, int y, std::vector<Entity>& entity);
	void checkCollisions(std::vector<Entity>& entity);
private:
	int xSize = 50;
	int ySize = 20;
};

#endif