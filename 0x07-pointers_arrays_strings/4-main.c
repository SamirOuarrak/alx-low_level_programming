#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, worldada";
    char *f = "world";
    char *t;

    t = strpbrk(s, f);
    printf("strpbrk : %s\n", t);
    t = _strpbrk(s, f);
    printf("_strpbrk : %s\n", t);
    return (0);
}
