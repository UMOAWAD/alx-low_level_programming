#include <stdio.h>

/**
 * main - prints all combinations of single digits
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
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
