#include "dog.h"

/**
 * init_dog - a program that initialize a varible of type struct dog
 * @d: pointer
 * @owner: Teslim
 * @age: 2.5
 * Return: nothing
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
