#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structer named dog.
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 * Description: informaion about a dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
