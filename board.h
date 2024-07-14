#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void board(char grid[])
{
	system("cls");
	printf("\n\n\tTic-Tac-Toe\n\n");

	printf("Player y (X)  -  Player x (O)\n\n\n");

	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c \n", grid[1], grid[2], grid[3]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", grid[4], grid[5], grid[6]);

	printf("_____|_____|_____\n");
	printf("     |     |     \n");

	printf("  %c  |  %c  |  %c \n", grid[7], grid[8], grid[9]);

	printf("     |     |     \n\n");
} // end board()