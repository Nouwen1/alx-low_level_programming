#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  describing a dog
 *
 * @name: char, name of the dog
 * @age: float, age of the dog
 * @owner: char, the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float *age, char *owner);
void free_dog(dog_t *d);

#endif
