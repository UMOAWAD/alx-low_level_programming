#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (num1 >= num2)
			{
			} else
			{
				putchar(num1);
				putchar(num2);

				if (num1 == '8' && num2 = '9')
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

	return (0);
}
