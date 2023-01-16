#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - intialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: the name of the dog (member to struct dog)
 * @age: age of the dog (member to struct dog)
 * @owner: the name of the owner of the dog(member to struct dog)
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

