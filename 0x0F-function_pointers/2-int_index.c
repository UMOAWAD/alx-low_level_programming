#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns its index.
 *
 * @array: the array to search in.
 *
 * @size: the size of the array.
 *
 * @cmp: the function to compare the values.
 *
 * Return: void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (cmp(array[i]));
		}
	}

	return (-1);
}
