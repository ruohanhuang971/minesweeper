#include <SFML/Graphics.hpp>
#include "Field.h"
#include "Global.h"
#include "Cell.h"

Field::Field():cells(COLUMNS, std::vector<Cell>(ROWS, Cell(0))) {
	
}

void Field::draw(sf::RenderWindow& i_window) {
	sf::RectangleShape cell_shape(sf::Vector2f(CELL_SIZE - 1, CELL_SIZE - 1));
	cell_shape.setFillColor(sf::Color(146, 182, 255));

	for (unsigned char a = 0; a < COLUMNS; a++) {
		for (unsigned char b = 0; b < ROWS; b++) {
			cell_shape.setPosition(CELL_SIZE * a, CELL_SIZE * b);
			i_window.draw(cell_shape);
		}
	}
}
