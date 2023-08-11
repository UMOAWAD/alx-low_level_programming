#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);

		if (ch == 'f')
		{
			putchar('\n');
		}
	}

	return (0);
}
