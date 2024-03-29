#include "main.h"

/**
 * flip_bits - returns the number of bits needed to
 * flip to get one number from another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dbits;

	for (dbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			dbits++;
	}

	return (dbits);
}
