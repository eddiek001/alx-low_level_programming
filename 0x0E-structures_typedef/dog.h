#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name, age and owner
 * @name: first input
 * @age: second input
 * @owner: third input
 *
 * Description: Longer description
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
