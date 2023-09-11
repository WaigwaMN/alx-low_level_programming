#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - main function
 * @d: .
 * Return: zero when succesful
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
