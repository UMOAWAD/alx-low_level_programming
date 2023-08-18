#include <stdio.h>

/**
 * main - prints the largest prime factor of a number.
 *
 * Return: 0
 */

int main(void)
{
	long long int i = 612852475143;
	long int l;

	for (l = i / 2; l >= 2; l--)
	{
		if (i % l == 0)
		{
			if (l % 2 != 0 && l % 3 != 0 && l % 5 != 0)
			{
				if (l % 7 != 0)
				{
					break;
				}
			}
		}
	}

	printf("%li\n", l);

	return (0);
}
