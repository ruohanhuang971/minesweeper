#pragma once

class Cell {
public:
	Cell(bool i_is_mine);
	void set_is_mine(bool i_is_mine);
private:
	bool is_mine;
};