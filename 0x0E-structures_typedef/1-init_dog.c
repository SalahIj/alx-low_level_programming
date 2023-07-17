#include <stdio.h>
#include "dog.h"
/**
 * init_dog - info about a dog.
 * @d: the first input.
 * @name: the second input.
 * @age: the third input.
 * @owner: the firth input.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
