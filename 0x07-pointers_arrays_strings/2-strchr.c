#include "main.h"

/**
 * _strchr - find a character in a string.
 *
 * @s: the string to look in.
 *
 * @c: the character to find.
 *
 * Return: a pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}

	return NULL;
}
