#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to an array of char
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int c, i, j, l;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	a = malloc((c + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = l = 0; l < c; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			a[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < c - 1)
			a[l] = av[i][j];
	}
	a[l] = '\0';

	return (a);
}
