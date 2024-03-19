/*
 * Main.cpp
 *
 *  Created on: 10/02/2024
 *      Author: dongmo
 */

#include<iostream>
#include<time.h>


using namespace std;

#include "Board2.h"

int main() {
	srand(time(0));

	int Size;

	cout << "Please enter board size.";
	cin >> Size;

	Board board(Size);

//	board.printBoard();

	board.printBoard();

	// Check if the board is full
    if (board.isBoardFull()) {
        cout << "The board is full." << endl;
    }

	return 0;
}
