#include <SFML/Graphics.hpp>
#include "Global.h"
#include "Cell.h"
#include "Field.h"

int main() {
	//SFML window
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * COLUMNS * SCREEN_RESIZE, CELL_SIZE * ROWS * SCREEN_RESIZE), 
		"MINESWEEPER", sf::Style::Close);
	//Resize window
	window.setView(sf::View(sf::FloatRect(0, 0, CELL_SIZE * COLUMNS, CELL_SIZE * ROWS)));
	//Store SFML events
	sf::Event event;
	//Field object
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