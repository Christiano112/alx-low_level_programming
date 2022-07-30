#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloctes a memory block
 * @ptr: pointer to the previous memory.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size of ptr in bytes
 * Return: ptr without changes if new_size == old_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
