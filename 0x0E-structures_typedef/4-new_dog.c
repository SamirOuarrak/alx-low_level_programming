#include "dog.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: new string
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}

/**
 * new_dog - new_dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog = NULL;

	myDog = malloc(sizeof(dog_t));
	if (!myDog)
		return (NULL);
	myDog->age = age;
	myDog->name = _strdup(name);
	if (!myDog->name && name)
	{
		free(myDog);
		return (NULL);
	}
	myDog->owner = _strdup(owner);
	if (!myDog->owner && owner)
	{
		free(myDog->name);
		free(myDog);
		return (NULL);
	}
	return (myDog);
}
