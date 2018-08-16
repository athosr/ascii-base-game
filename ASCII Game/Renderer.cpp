#include "Renderer.h"

#include <iostream>

void Renderer::render(std::vector<Entity>& entity)
{
	system("cls");
	for (int y = 1; y < ySize; y++)
	{
		for (int x = 1; x < xSize; x++)
		{
			printEntities(x, y, entity);
		}	
		std::cout << std::endl;
	}
}

void Renderer::printEntities(int x, int y, std::vector<Entity>& entity)
{
	for (std::size_t i = 0; i < entity.size(); i++)
	{
		if (entity[i].get_x() == x && entity[i].get_y() == y)
		{
			// Entity found!
			std::cout << entity[i].getChar();
			return;
		}
	}
	// Entity not found
	std::cout << ".";
}

void Renderer::checkCollisions(std::vector<Entity>& entity)
{
	for (std::size_t i = 1; i < entity.size(); i++)
	{
		if ((entity[0].get_x() + entity[0].temp_x) == entity[i].get_x() && (entity[0].get_y() + entity[0].temp_y) == entity[i].get_y())
			return;
	}
	entity[0].set_x(entity[0].get_x() + entity[0].temp_x);
	entity[0].set_y(entity[0].get_y() + entity[0].temp_y);
}