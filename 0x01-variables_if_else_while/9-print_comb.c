#include <stdio.h>

/**
 * main - prints all combinations of single digits
 *
 * Return: 0
 */

int main(void)
{
	int num1;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		putchar(num1);

		if (num1 == '9')
		{
			putchar('\n');
		} else {
			putchar(',');
			putchar(' ');
		}		
	}

	return (0);
}
