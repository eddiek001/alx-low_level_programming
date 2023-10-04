#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2d  aray
 * @grid: second grind
 * @height: dimention of grid
 * Description: free memeory grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
