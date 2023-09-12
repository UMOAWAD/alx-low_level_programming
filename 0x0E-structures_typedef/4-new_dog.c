#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - defines a dog.
 *
 * @name: its name.
 *
 * @age: its age,
 *
 * @owner: its owner.
 *
 * Return: void.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
