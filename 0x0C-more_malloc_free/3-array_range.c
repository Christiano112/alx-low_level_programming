#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arrray of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array if max > min return NULL
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
