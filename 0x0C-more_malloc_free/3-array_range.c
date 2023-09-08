#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: the lowest value of the array.
 *
 * @max: the highest value of the array.
 *
 * Return: a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
