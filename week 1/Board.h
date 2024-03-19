/*
 * Board.h
 *
 *  Created on: 25/02/2024
 *      Author: dongmo
 */

#ifndef BOARD_H_
#define BOARD_H_

class Board {
private:
	int boardSize;
	int **grid;

public:

	Board(int);
	virtual ~Board();
	Board(const Board &);
    bool addMove(int, int, int);
	void printBoard();
	bool isBoardFull();

	int getBoardSize() const {
		return boardSize;
	}

	int getGrid(int x, int y) const {
		return grid[x][y];
	}
};

Board::Board(int bs) {
	boardSize = bs;
	grid = new int*[boardSize];
	for (int i = 0; i < boardSize; i++)
		grid[i] = new int[boardSize];

	for (int i = 0; i < boardSize; i++)
		for (int j = 0; j < boardSize; j++) {
			grid[i][j] = 0;

		}
}

Board::~Board() {
	for (int i = 0; i < boardSize; i++)
		delete[] grid[i];

	delete[] grid;
}

Board::Board(const Board &cboard) {
	boardSize = cboard.getBoardSize();

	grid = new int*[boardSize];
	for (int i = 0; i < boardSize; i++)
		grid[i] = new int[boardSize];

	for (int i = 0; i < boardSize; i++)
		for (int j = 0; j < boardSize; j++)
			grid[i][j] = cboard.getGrid(i, j);
}


bool Board::addMove(int x, int y, int v) {
	if (x < 0 || y < 0 || x >= boardSize || y >= boardSize) {
		cout << "Move (" << x + 1 << ", " << y + 1 << ") out of range!" << endl;
		return false;
	}


	grid[x][y] = v;

	return true;
}

void Board::printBoard() {
	cout << "     ";
	for (int j = 0; j < boardSize; j++) {
		if (j < 9)
			cout << j + 1 << "   ";
		else
			cout << j + 1 << "  ";
	}
	cout << endl;

	cout << "   ";
	for (int j = 0; j < boardSize; j++) {
		cout << "----";
	}
	cout << endl;

	for (int i = 0; i < boardSize; i++) {
		if (i < 9)
			cout << " " << i + 1 << " ";
		else
			cout << i + 1 << " ";

		for (int j = 0; j < boardSize; j++) {
			if (grid[i][j] == 0) {
				if (j == 0) {
					cout << "|   |";
				} else {
					cout << "   |";
				}
			} else if (grid[i][j] == 1) {
				if (j == 0) {
					cout << "| B |";
				} else {
					cout << " B |";
				}
			} else {
				if (j == 0) {
					cout << "| C |";
				} else {
					cout << " C |";
				}
			}
		}
		cout << endl;
		if (i < boardSize - 1)
			cout << endl;

	}
	cout << "   ";
	for (int j = 0; j < boardSize; j++) {
		cout << "----";
	}

	cout << endl;
	cout << endl;
}

bool Board::isBoardFull() {
	bool notFull = false;
	for (int i = 0; i < boardSize; i++)
	{
		for (int j = 0; j < boardSize; j++)
		{
			
			while(!notFull)
			if (grid[i][j] == 0)
			{
				notFull = true;
			}
		}
	}
	return notFull;

}

#endif /* BOARD_H_ */
