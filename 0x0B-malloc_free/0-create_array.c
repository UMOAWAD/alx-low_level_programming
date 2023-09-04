#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific char.
 *
 * @size: the size of the array.
 *
 * @c: the char to initialize it with.
 *
 * Return: NULL if size = 0 or if it fails, or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *str;

	str = malloc(size);

	str[0] = c;

	return (str);
}
