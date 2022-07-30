#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strm;
	unsigned int ls1, ls2, lstrm, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lstrm = ls1 + n;

	strm = malloc(lstrm + 1);

	if (strm == NULL)
		return (NULL);

	for (i = 0; i < lstrm; i++)
	{
		if (i < ls1)
			strm[i] = s1[i];
		else
			strm[i] = s2[i - ls1];
	}
	strm[i] = '\0';

	return (strm);
}
