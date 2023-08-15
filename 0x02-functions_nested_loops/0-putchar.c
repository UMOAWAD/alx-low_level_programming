#include <stdio.h>

/**
 * main - prints _putchar followed by new line
 *
 * Return: 0
 */

int main(void)
{
	char put[] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(put[i]);
	}

	return (0);
}
