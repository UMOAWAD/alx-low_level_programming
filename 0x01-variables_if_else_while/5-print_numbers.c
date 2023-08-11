#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			printf("%d\n", i);
		} else
		{
			printf("%d", i);
		}
	}
	return (0);
}
