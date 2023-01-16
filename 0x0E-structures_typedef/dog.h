#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Define a struct with the ff members
 * @name: First member of type pointer to char
 * @age: Second member of type int
 * @owner: Third member of type pointer to char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

