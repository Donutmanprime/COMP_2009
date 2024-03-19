/*
 * Main.cpp
 *
 *  Created on: 10/02/2024
 *      Author: dongmo
 */

#include<iostream>
#include<time.h>
#include <iostream>


using namespace std;

#include "Board.h"

int main() {

    int v, w, x, y;

	Board board(3);

    for(int i = 0; i <9; i++)
    {
    //taking inputs
    cout << "Player B please enter your move.";
    cin >> x, y;
    

    cout << "Player C please enter your move.";
    cin >> v, w;
    
    if(v == x && w ==y)
    {
        cout << "cell occupied. Please choose another one";
        cin >> v;
        cin >> w;
    }

//	board.printBoard();
// player B
	board.addMove(x, y, 1);
    //player c
	board.addMove(v, w, -1);
    
	board.printBoard();

    }

	return 0;
}
