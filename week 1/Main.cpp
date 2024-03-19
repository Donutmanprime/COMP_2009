/*
 * Main.cpp
 *
 *  Created on: 10/02/2024
 *      Author: dongmo
 */

#include<iostream>
#include<time.h>


using namespace std;

#include "Board.h"

int main() {
	srand(time(0));

	Board board(9);

//	board.printBoard();
	board.addMove(5, 1, -1);
	board.addMove(3, 4, 1);
	board.printBoard();

	return 0;
}
