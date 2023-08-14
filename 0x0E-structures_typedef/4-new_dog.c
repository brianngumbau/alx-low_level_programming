#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns legth of a string
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: final destination
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	for (k = 0; src[k]; k++)
		dest[k] = src[k];
	dest[k] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}

	dg->name = _strcpy(dg->name, name);
	dg->age = age;
	dg->owner = _strcpy(dg->owner, owner);

	return (dg);
}
