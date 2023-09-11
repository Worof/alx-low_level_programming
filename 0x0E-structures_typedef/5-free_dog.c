#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
