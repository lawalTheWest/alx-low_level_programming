#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog object template
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t; /* End struct */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *cp_to, char *cp_from);
int _strlen(char *str);

#endif
