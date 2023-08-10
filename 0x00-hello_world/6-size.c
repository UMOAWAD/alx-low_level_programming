#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longLongType;
	float floatType;

	printf("The size of a char is: %zu byte(s)\n", sizeof(charType));
	printf("The size of an int is: %zu byte(s)\n", sizeof(intType));
	printf("The size of a long int is: %zu byte(s)\n", sizeof(longType));
	printf("The size of a long long int is: %zu byte(s)\n", sizeof(longLongType));
	printf("The size of a float is: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
