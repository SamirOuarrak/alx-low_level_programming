#include "dog.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: new string
 */
char *_strdup(char *str)
{
	char *dup;
	size_t i;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * strlen(str) + 1);
	if (dup)
	{
		for (i = 0; i < strlen(str); i++)
			dup[i] = str[i];
	}
	dup[i] = '\0';
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
	myDog->name = strdup(name);
	if (!myDog->name && name)
	{
		free(myDog);
		return (NULL);
	}
	myDog->owner = strdup(owner);
	if (!myDog->owner && owner)
	{
		free(myDog->name);
		free(myDog);
		return (NULL);
	}
	return (myDog);
}
