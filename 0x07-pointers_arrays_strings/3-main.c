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
    char *s = "hellloorld";
    char *f = "doleh";
    unsigned int n;

    n = strspn(s, f);
    printf("strspn : %u\n _strspn : %u\n",  n, _strspn(s,f));
    return (0);
}
