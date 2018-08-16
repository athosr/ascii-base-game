#include "Entity.h"

#include <conio.h>


bool Entity::playerInput()
{
	temp_x = 0;
	temp_y = 0;
	char key = ' ';
	key = _getch();

	switch (key)
	{
		// Move up
	case 'w':
		temp_y = -1;
		return true;
		break;
		// Move left
	case 'a':
		temp_x = -1;
		return true;
		break;
		// Move down
	case 's':
		temp_y = 1;
		return true;
		break;
		// Move right
	case 'd':
		temp_x = 1;
		return true;
		break;
	case 27:
		return false;
		break;
	}
	return true;
}