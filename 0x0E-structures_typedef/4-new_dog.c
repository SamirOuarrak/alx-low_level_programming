#include "dog.h"

/**
 * new_dog - new_dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;

	myDog = malloc(sizeof(dog_t));
	myDog->age = age;
	myDog->name = name;
	myDog->owner = owner;
	return (myDog);
}
