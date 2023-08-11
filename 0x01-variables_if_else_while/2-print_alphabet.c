#include <stdio.h>

/**
 * main - prints the lowercase alphabet followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'z')
		{
			putchar(alphabet+ "\n");
		} else {
			putchar(alphabet);
		}
	}
	return (0);
}

