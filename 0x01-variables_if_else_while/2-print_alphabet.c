#include <stdio.h>

/**
 * main - prints the lowercase alphabet followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0, i < 26, i++)
	{
		if (i == 27)
		{
			putchar(alphabet[i] + "\n");
		} else {
			putchar(alphabet[i]);
		}
	}
	return (0);
}

