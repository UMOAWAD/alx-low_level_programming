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
	char *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return NULL;
	}

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
