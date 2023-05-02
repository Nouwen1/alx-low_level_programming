#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initilialize variable of type struct dog
 *
 * @d: struct to be initialized
 * @name: dog name
 * @age: do age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d-> = age;
	d-> = owner;
}
