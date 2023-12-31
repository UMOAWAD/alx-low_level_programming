#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a dog.
 *
 * @d: the struct used.
 *
 * @name: the name of the dog.
 *
 * @age: the age of the dog.
 *
 * @owner: the owner of the dog.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
