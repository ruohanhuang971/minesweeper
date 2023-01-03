#pragma once
#include "Cell.h" 
#include <vector>

class Field {
public:
	Field();
	void draw(sf::RenderWindow& i_window);

private:
	std::vector<std::vector<Cell>> cells;
};

