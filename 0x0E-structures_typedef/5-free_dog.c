#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free all memory allocated for the struct dog
 * @d: struct dog to free
 * Return: void
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
