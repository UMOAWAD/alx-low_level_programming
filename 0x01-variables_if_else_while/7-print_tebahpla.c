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
			putchat('\n');
		}
	}

	return (0);
}
