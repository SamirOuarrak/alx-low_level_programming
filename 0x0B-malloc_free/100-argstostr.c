#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - argstostr
 * @ac: argc
 * @av: argv
 * Return: Matrice
 */
char *argstostr(int ac, char **av)
{
	char *str;
	size_t lenArgv;
	int i;
	size_t j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	lenArgv = 0;
	while (i++ < ac)
		lenArgv += (av[i] ? strlen(av[i]) : 0) + 1;
	lenArgv++;
	str = malloc(sizeof(char) * lenArgv);
	ptr = str;
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			*str++ = av[i][j];
		*str++ = '\n';
	}
	*str = '\0';
	return (ptr);
}
