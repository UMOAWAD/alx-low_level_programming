#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory then checks if it is successful.
 *
 * @b: the size of memory to allocate.
 *
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		printf("98\n");
		return (NULL);
	}

	return (alloc);
}
