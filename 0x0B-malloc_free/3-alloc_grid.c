#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the number of columns.
 *
 * @height: the number of rows.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, w, h;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	grid = malloc(sizeof(int*) *  height);

	if (grid == NULL)
	{
		return ('\0');
	}

	for (i =0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[w][h] = 0;
		}
	}

	return (grid);
}	
