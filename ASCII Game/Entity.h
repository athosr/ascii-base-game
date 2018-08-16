#ifndef ENTITY_H
#define ENTITY_H

#include <vector>

class Entity
{
public:
	Entity(int x, int y, char character)
	{
		m_x = x;
		m_y = y;
		m_character = character;
	}

	bool playerInput();
	int get_x() { return m_x; }
	int get_y() { return m_y; }
	void set_x(int x) { m_x = x; }
	void set_y(int y) { m_y = y; }
	char getChar() { return m_character; }
	int temp_x, temp_y;

private:
	int m_x, m_y;
	char m_character;
};

#endif