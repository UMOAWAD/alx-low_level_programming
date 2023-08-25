#include "main.h"

/**
 * rev_array - reverses an array.
 *
 * @a: the array to reverse.
 *
 * @n: the number of elements of the array.
 *
 * Return: void.
 */

void rev_array(int *a, int n)
{
	int i, x;
	int *b;
	int *c;

	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}

	for (x = 0; x < n; x++)
	{
		i--;
		c[x] = b[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = c[i];
	}
}
