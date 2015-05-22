// TTT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

/*0 1 2 3
*a N N N
*b N N N
*c N N N */


// 9 == empty, 8 == x, 7 == o
//array[vertical][horizontal]

int* build_gameboard() {

	int game_board[4][4];

	game_board[0][0] = 0;
	game_board[0][1] = 1;
	game_board[0][2] = 2;
	game_board[0][3] = 3;
	game_board[1][0] = 1;
	game_board[2][0] = 2;
	game_board[3][0] = 3;

	for (int y = 1; y < 4; ++y) {
		for (int x = 1; x < 4; ++x) {
			game_board[y][x] = 9;
		}
	}

	return game_board;
}

void print_gameboard() {

}


int main() {


	cout << "\n-----------------" << endl;
	for (int y = 0; y < 4; ++y) {
		for (int x = 0; x < 4; ++x) {
			if (game_board[y][x] == 9) {
				cout << "| " << "  ";
			}
			else if (game_board[y][x] == 8) {
				cout << "| " << "X" << " ";
			}
			else if (game_board[y][x] == 7) {
				cout << "| " << "O" << " ";
			}
			else {
				cout << "| " << game_board[y][x] << " ";
			}
		}
		cout << "|";
		cout << "\n-----------------" << endl;
	}
	return 0;
}