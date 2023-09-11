#include "dog.h"

/**
 * init_dog - main function
 * @d: character
 * @name: character
 * @age: character
 * @owner: character
 * Return: zero when succesful
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
