#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a variable of type structure dog
 * @d: pointer to structure dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
