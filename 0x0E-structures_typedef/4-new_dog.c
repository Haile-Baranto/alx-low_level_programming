

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	int count1, count2, count3;
	char *Name, *Owner;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	for (count1 = 0; name[count1] != '\0'; count1++)
		;
	for (count2 = 0; owner[count2] != '\0'; count2++)
		;

	Name = malloc(sizeof(char) * count1 + 1);
	if (Name == NULL)
	{
		free(dog);
		return (NULL);
	}
	Owner = malloc(sizeof(char) * count2 + 1);
	if (Owner == NULL)
	{
		free(Name);
		free(dog);
		return (NULL);
	}
	for (count3 = 0; count3 <= count1; count3++)
		Name[count3] = name[count3];
	for (count3 = 0; count3 <= count2; count3++)
		Owner[count3] = owner[count3];

	dog->name = Name;
	dog->age = age;
	dog->owner = Owner;

	return (dog);
}
