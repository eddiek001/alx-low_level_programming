#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop
 * @width: input 1
 * @height: input 2
 * Return: pointer two dimention array
 */
int **alloc_grid(int width, int height)
{
	int **hee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	hee = malloc(sizeof(int *) * height);

	if (hee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		hee[x] = malloc(sizeof(int) * width);

		if (hee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(hee[x]);

			free(hee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			hee[x][y] = 0;
	}

	return (hee);
}
