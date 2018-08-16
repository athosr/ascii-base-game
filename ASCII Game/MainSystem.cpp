#include "MainSystem.h"

#include <iostream>


void MainSystem::run()
{
	initialize();
	mainLoop();
}

void MainSystem::initialize()
{
	GameState = GameState::RUN;

	// Generates the player
	entity.push_back(Entity(10, 10, '@'));

	// Generates some walls
	for (auto i = 1; i < 10; i++)
	{
		entity.push_back(Entity(15, i, '#'));
	}
	for (auto i = 10; i < 30; i++)
	{
		entity.push_back(Entity(i, 15, '#'));
	}
	for (auto i = 35; i < 50; i++)
	{
		entity.push_back(Entity(i, 5, '#'));
	}
	for (auto i = 1; i < 16; i++)
	{
		entity.push_back(Entity(40, i, '#'));
	}
}

void MainSystem::mainLoop()
{
	std::cout << "Press W/A/S/D to move. \nPress ESC to exit. \nEnter any key to start the game. \nEnjoy :)\n";
	std::cin.ignore();

	while (GameState == GameState::RUN)
	{
		renderer.render(entity);
		if (!entity[0].playerInput())
			GameState = GameState::EXIT;
		renderer.checkCollisions(entity);
	}
}