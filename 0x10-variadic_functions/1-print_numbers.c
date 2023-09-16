#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 *
 * @separator: Numbers separator.
 *
 * @n: Numbers count.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ap, int));

			if (i != n - 1)
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
