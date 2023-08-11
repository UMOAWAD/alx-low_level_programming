#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 * followed by the uppercase alphabet
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		if (ch == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
