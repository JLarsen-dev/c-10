int checkwin(char grid[])
{
	if ((grid[1] == grid[2] && grid[2] == grid[3]) ||    // Horizontal
		(grid[4] == grid[5] && grid[5] == grid[6]) ||
		(grid[7] == grid[8] && grid[8] == grid[9]) ||
		(grid[1] == grid[4] && grid[4] == grid[7]) ||    // Vertical
		(grid[2] == grid[5] && grid[5] == grid[8]) ||
		(grid[3] == grid[6] && grid[6] == grid[9]) ||
		(grid[1] == grid[5] && grid[5] == grid[9]) ||    // Diagonal
		(grid[3] == grid[5] && grid[5] == grid[7]))
		return 1;
	if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3' &&    // Full
		grid[4] != '4' && grid[5] != '5' && grid[6] != '6' &&
		grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
		return 0;
	return -1;
} // end checkwin()