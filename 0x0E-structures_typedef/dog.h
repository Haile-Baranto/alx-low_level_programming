#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - Define a struct with the ff members
 * @name: First member of type pointer to char
 * @age: Second member of type int
 * @owner: Third member of type pointer to char
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

