#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - init prot
 * @d: structure to free
 * Description: frees a structure step-by-step
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
