#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of a dog
 *
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (success), 0 if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t;
	int len1, len2;

	len1 = _strlen(NAME);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t);
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		reurn (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
