/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
//Header Files
#include <stdio.h>
#include <unistd.h>
#include "life.h"

//Main Function
int main(int argc, char *argv[]) {
	setbuf(stdout, NULL);
	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);

	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;

	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1); //The program pauses for a second before going to next Round.
	}

	return 0;
}

/* Description: Initialize the board to DEAD (zero).
 * Param: 2D array vBoard which creates the 15x15 board.
 * Precondition: The 2D array vBoard is initialized and filled with values ALIVE and DEAD
 * Postcondition: The vBoard is initialized and all values are set to DEAD (zero).
 * Return: void
 */
void initBoard(int vBoard[][YSIZE]) {
	for(int i=0; i<XSIZE; i++) {
			for(int j=0; j<YSIZE; j++) {
				vBoard[i][j] = DEAD;
			}
		}
}

/* Description: Creates a temporary board and calls the function neighbors to count the cell neighbors and
 * follows the conditions of ALIVE and DEAD performs all the algorithms on vBorad and updates the temp Board.
 *  Param: vBoard[][YSIZE] 2D array which represents the Cell in the Board.
 * Precondition: The 2D array tmpBoard and vBoard is initialized and filled with values of some ALIVE cells.
 * Postcondition: The vBoard gets filled with the values of ALIVE and DEAD each round till 15 rounds.
 * Return: void
 */
void playRound(int vBoard[][YSIZE]) {
	int tmpBoard[XSIZE][YSIZE];
	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	for(int i=0; i<XSIZE; i++) {
			for(int j=0; j<YSIZE; j++) {
				int n = neighbors(vBoard, i, j); //To check the number of neighbors

				//If the cell is ALIVE and it has less than two living neighbors, it dies due to loneliness.
				if(vBoard[i][j] == ALIVE && n < 2) {
					tmpBoard[i][j] = DEAD;
				}
				//If the cell is ALIVE and if it has two or three living neighbors, it lives to the next generation.
				if(vBoard[i][j] == ALIVE && (n == 2 || n == 3)) {
					tmpBoard[i][j] = ALIVE;
				}
				///If the cell is ALIVE and if it has more than three living neighbors, it dies due to overpopulation.
				if(vBoard[i][j] == ALIVE && n > 3) {
					tmpBoard[i][j] = DEAD;
				}
				//It the cell is DEAD and, if it has exactly three live neighbors, it becomes alive due to reproduction.
				if(vBoard[i][j] == DEAD && n == 3) {
					tmpBoard[i][j] = ALIVE;
				}
			}
		}

    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

/* Description: Determines the location of the cell on within XSIZE and YSIZE.
 * Param: It takes the coordinates x and y.
 * Precondition: x and y are initialized with and int.
 * Postcondition: It returns 0 if the cells are not within XSIZE and YSIZE else returns 1;
 * Return: int 1 if the cells are in the given boundaries otherwise returns int 0.
 */
int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}

/* Description: It tells us the number of neighbors a cell has and calls the onBoard method
 * to check the the cells in boundaries.
 * Param: vBoard a 2D array representing board and the cells, int x and int y are the coordinates of the
 * surrounding cells to check for the cell's neighbors .
 *
 * Precondition: vBoard should be initialized and x and y must be within the boundary if the board.
 * Postcondition: The number of ALIVE surrounding cells are returned.
 * Return: int n
 */
int neighbors(int vBoard[][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}


/* Description: Prints out a board with XSIZE and YSIZE which is 15x15. Also marks the alive cells as
 * 'X' on the board.
 * Param: vBoard[XSIZE][YSIZE] is a 2D array.
 *
 * Precondition: The board is filled with the values of ALIVE and DEAD.
 * Postcondition: It prints the board.
 * Return: void
 */
void printBoard(int vBoard[XSIZE][YSIZE]) {
	for(int i=0; i<XSIZE; i++){
		printf(" ");  //Adds Space between each cell

		for(int j=0; j<YSIZE; j++){
		if(vBoard[i][j] == ALIVE) printf("X"); //Prints the cell in the table
		else
		printf(" ");

		if(j<XSIZE)
		printf(" | "); //Separates columns.
		}
	if(i<XSIZE)
	printf("\n____________________________________________________________\n"); //Separates rows.
	else
		printf("\n");
		}
}

