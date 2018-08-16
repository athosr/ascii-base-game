#include <iostream>

#include "MainSystem.h"

int main()
{
	MainSystem main;
	main.run();

	std::cout << "Enter any key to quit...";
	std::cin.ignore();
	return 0;
}