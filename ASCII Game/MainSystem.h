#ifndef MAINSYSTEM_H
#define MAINSYSTEM_H

#include "Renderer.h"
#include "Entity.h"

enum GameState { RUN, EXIT };

class MainSystem
{
public:
	void run();
	void initialize();
	void mainLoop();
private:
	GameState GameState;
	Renderer renderer;
	std::vector<Entity> entity;
};

#endif