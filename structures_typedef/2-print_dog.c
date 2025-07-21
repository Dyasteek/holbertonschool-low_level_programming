#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - init prot
 * @d: dogs struct data
 * Description: this function prints a struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
