#include "board.h"
#include <curses.h>


int random(int min, int max){
   return rand() % (max + 1 - min) + min;
}

bool food_exist(Board_t *board) {
	return board.food;
};

Board_t make_food(Board_t *board) {
	if (!food_exist(board)) {
		int rand_x = random(0, board.max_width);
		int rand_y = random(0, board.max_height);

		// if (no_step_on_snek(board.snake, rand_x, rand_y)) {};
	}
	return board;
};

bool no_step_on_snek(Segment_t *snake, int x, int y) {
	while (snake != NULL) {
		
	} 
}