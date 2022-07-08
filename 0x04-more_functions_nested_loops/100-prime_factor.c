#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long int n, fn;

	n = 612852475143;
	for (fn = 2; fn <= n; fn++)
	{
		if (n % fn == 0)
		{
			n /= fn;
			fn--;
		}
	}
	printf("%ld\n", fn);
	return (0);
}
