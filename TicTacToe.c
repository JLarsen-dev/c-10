/********************************************************************************
 * Tic-Tac-Toe Game - Original code                                             *
 *                                                                              *
 * To Do (can be done in almost any order):                                     *
 *   1. Change 'player' to a char                                               *
 *   2. Replace "Player #" with "Player X" and "Player Y"                       *
 *   3. Add entering 0 terminates the program                                   *
 *   4. Use a parameter to communicate 'grid'; remove 'grid' global variable    *
 *   5. Divide into 3 files; set up and use appropriate .h headers              *
 *   6. Make game into loop, asking if client wants to play again (Y/N)         *
 ********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS   // May be necessary since scanf() is unsafe

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "board.h"
#include "checkwin.h"



/*********************************************
 * Main driver: Plays the Tic-Tac-Toe game   *
 *********************************************/

int main()
{
	bool loop;
	do{
		int playernum = 1, i, choice, rc;
		char player[2] = {"xy"};
		char mark;
		char grid[] = "0123456789";
		loop = true;
		// Master game loop starts here
		do
		{
			board(grid);
			playernum = (playernum % 2) ? 1 : 0;

			printf("Player %c, enter a number: ", player[playernum]);
			rc = scanf("%d", &choice);

			mark = (playernum == 1) ? 'X' : 'O';

			// Enter player's mark into the grid, if legal move
			if (rc > 0 && 1 <= choice && choice <= 9 && grid[choice] == '0' + choice)
				grid[choice] = mark;
			else if (choice == 0){
				exit(1);
			}
			else
			{
				char buf[100];
				printf("Invalid move. Press any key to continue ");
				playernum--;
				gets(buf);
				_getch();
			}
			i = checkwin(grid);

			playernum++;
		} while (i == -1);

		board(grid);

		// Display final status
		if (i == 1)
			printf("==> \aPlayer %c wins\n", player[--playernum]);
		else
			printf("==> \aGame is a draw\n");

		printf("\nWould you like to play again? (y/n)");
		char temp[1] = "y";
		scanf("%s", &temp);
		loop = (strcmp(temp, "n")) ? true : false;
		printf("\n");

		
	}while(loop);
	return 0;
} // end main()

/*********************************************
 * checkwin() returns game status:           *
 *  1 for game over with winner              *
 * -1 for game is in progress                *
 *  O for game is over with no winner        *
 *********************************************/



/********************************************************
 * board() displays Tic-Tac-Toe board with players      *
 ********************************************************/



/**************************************
 * End of Tic-Tac-Toe program         *
 **************************************/
