#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the number of columns.
 *
 * @height: the number of rows.
 *
 * Return: a pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, w, h;

	if (width <= 0 || height <= 0)
		return ('\0');

	grid = malloc(sizeof(int) *  height);

	if (grid == NULL)
	{
		free(grid);
		return ('\0');
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
