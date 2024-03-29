

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog structure
 * @d: pointer to dog structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
