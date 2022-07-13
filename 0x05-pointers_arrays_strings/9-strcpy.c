#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by a var,
 * including the terminating "0" to the buffer
 * pointed to by another var
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
