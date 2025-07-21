#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: saves dogs data into different variables
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
#ifndef DOG_T
#define DOG_T
typedef struct dog dog_t;
#endif
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
