#include <SFML/Graphics.hpp>
#include "Global.h"
#include "Cell.h"
#include "Field.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * COLUMNS * SCREEN_RESIZE, CELL_SIZE * ROWS * SCREEN_RESIZE), 
		"MINESWEEPER", sf::Style::Close);

	sf::Event event;

	Field field;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		field.draw(window);
		window.display();
	}

	return 0;
}