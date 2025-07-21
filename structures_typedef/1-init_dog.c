#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * init_dog - init function
 * @d: structure of dog
 * @name: new dogs name
 * @age: new age
 * @owner: new owner
 * Description: takes a atructures and inputs new data
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
