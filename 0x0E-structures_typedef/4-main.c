#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, NULL);
    if (my_dog)
       printf("My name is %s, and I am %.1f, my owner : %s\n", my_dog->name, my_dog->age, my_dog->owner);
 /* free(my_dog->name);
    free(my_dog->owner);
    free (my_dog); */
    return (0);
}