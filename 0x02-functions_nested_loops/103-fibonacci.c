#include <stdio.h>

/**
 * main - Prints the even numbers of
 * the fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, fn, fn1;

	a = 1;
	b = 2;
	fn = fn1 = 0;
	while (fn <= 4000000)
	{
		fn = a + b;
		a = b;
		b = fn;
		if ((a % 2) == 0)
		{
			fn1 += a;
		}
	}
	printf("%ld\n", fn1);
	return (0);
}
