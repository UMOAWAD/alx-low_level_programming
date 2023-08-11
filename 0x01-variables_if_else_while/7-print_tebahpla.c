#include <stdio.h>

/**
 * main - prints mirror of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);

		if (ch == 'a')
		{
			putchar('\n');
		}
	}

	return (0);
}
