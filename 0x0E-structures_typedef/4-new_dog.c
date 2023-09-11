#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - a function that creates a new dog
 *@name: Poppy
 *@age: 3.5
 *@owner: Bob
 *Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int t = 0, z = 0, m;
	dog_t *newdog;

	while (name[t] != '\0')
		t++;
	while (owner[z] != '\0')
		z++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(t * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (m = 0; m <= t; m++)
		newdog->name[m] = name[m];
	newdog->age = age;
	newdog->owner = malloc(z * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (m = 0; m <= z; m++)
		newdog->owner[m] = owner[m];
	return (newdog);

}
