#include <stdio.h>

/**
 * main - prints the lowercase alphabet followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{

		} else
		{
			putchar(ch);
		}

		if (ch == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
