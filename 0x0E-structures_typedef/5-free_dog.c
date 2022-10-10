#include "dog.h"

/**
* free_dog - a function that frees dogs.
* @d: dog to be freed
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->nam);
	free(d->owner);
	free(d);
}
