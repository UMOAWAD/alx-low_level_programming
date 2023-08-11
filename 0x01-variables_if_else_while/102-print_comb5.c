#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int check = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				for (num4 = '0'; num4 <= '9'; num4++)
				{
					if (num1 < num3)
					{
						check = 1;
					} else if (num1 == num3)
					{
					if (num2 < num4)
					{
						check = 1;
					}
					}

					if (check == 1)
					{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);

					if (num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9')
					{
						putchar('\n');
					} else
					{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}

	return (0);
}
