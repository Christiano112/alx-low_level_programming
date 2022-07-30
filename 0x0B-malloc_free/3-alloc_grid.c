#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **gri;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gri = malloc(height * sizeof(int *));
	if (gri == NULL)
	{
		free(gri);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gri[i] = malloc(width * sizeof(int));
		if (gri[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gri[i]);
			free(gri);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gri[i][j] = 0;

	return (gri);
}
