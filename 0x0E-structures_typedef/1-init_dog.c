#include "dog.h"
#include <stdio.h>

/**
 *init_dog - initializes a dog
 *@d: the structer of the dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: posessor of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
