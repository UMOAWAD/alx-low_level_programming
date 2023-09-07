#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for a sum of money.
 *
 * @argc: the number of arguments passed.
 *
 * @argv: the array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	int change;
	int i25 = i / 25, i10 = i / 10, i5 = i / 5, i2 = i / 2;
	int i_25 = i % 25, i_10 = i_25 % 10, i_5 = i_10 % 5, i_2 = i_5 % 2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		if (i > 25)
		{
			if (i % 25 == 0)
			{
				change = i / 25;
			}
			else
			{
				if (i_25 >= 10)
				{
					if (i_10 >= 5)
					{
						change = i25 + i_25 / 10 + i_10 / 5 + i_5;
					}
					else if ( i_10 >= 2)
					{
						change = i25 + i_25 / 10 + i_10 / 2 + i_2;
					}
					else
					{
						change = i25 + i_25 / 10 + i_10;
					}
				}
				else if (i_25 >= 5)
				{
					if ((i_25 % 5) >= 2)
					{
						change = i25 + 1 + 1 + ((i_25 % 5) % 2);
					}
					else
					{
						change = i25 + 1 + 1;
					}
				}
				else if (i_25 >= 2)
				{
					change = i25 + 1 + (i_25 % 2);
				}
				else
				{
					change = i25 + (i_25 % 5);
				}
			}
		}
		else if (i > 10)
		{
			if (i % 10 == 0)
			{
				change = i10;
			}
			else
			{
				if (i % 10 > 5)
				{
					change = i10 + ((i % 10) % 5);
				}
				else
				{
					change = i10 + ((i % 10) % 5);
				}
			}
		}
		else if (i > 5)
		{
			if (i % 5 == 0)
			{
				change = i5;
			}
			else if (i % 5 > 2)
			{
				if ((i % 5) % 2 == 0)
				{
					change = i5 + (i % 5) / 2;
				}
				else
				{
					change = i5 + (i % 5) /2 + 1;
				}
			}
			else
			{
				change = i5 + i % 5;
			}
		}
		else if (i > 2)
		{
			if (i % 2 == 0)
			{
				change = i2;
			}
			else
			{
				change = i2 + 1;
			}

		}
		else
		{
			change = i;
		}

		printf ("%d\n", change);
	}

	return (0);
}

