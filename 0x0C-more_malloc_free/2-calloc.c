#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: the number of elements.
 *
 * @size: the size of the array.
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = malloc(sizeof(size));
		
		if (a[i] == NULL)
		{
			return (NULL);
		}

		a[i] = 0;
	}

	return (ar);
}
