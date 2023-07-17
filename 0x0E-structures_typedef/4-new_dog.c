#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *_strlen - calculting length.
 * @s: the input of the function.
 * Return: the result.
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;
	return (i);
}
 /**
  * new_dog - info about a dog.
  *
  * @name: the first input.
  * @age: the second input.
  * @owner: the third input.
  * Return: the result.
  * Description: new_dog.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *P;
	int i;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	P = (dog_t *)malloc(sizeof(P));
	if (P == NULL)
		return (NULL);

	P->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (P->name == NULL)
	{
		free(P);
		return (NULL);
	}
	P->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (P->owner == NULL)
	{
		free(P->name);
		free(P);
		return (NULL);
	}
	for (i = 0; i < _strlen(name); i++)
	{
		P->name[i] = name[i];
	}
	P->name[i] = '\0';
	i = 0;
	for (i = 0; i < _strlen(owner); i++)
	{
		P->owner[i] = owner[i];
	}
	P->owner[i] = '\0';
	P->age = age;
	return (P);
}
