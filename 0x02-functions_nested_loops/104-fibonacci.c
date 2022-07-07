#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;
	long int a1, a2, fn, fn2, n1, n2;

	a1 = 1;
	a2 = 2;
	b = c = 1;
	printf("%ld, %ld", a1, a2);
	for (a = 0; a < 96; a++)
	{
		if (b)
		{
			fn = a1 + a2;
			printf(", %ld", fn);
			a1 = a2;
			a2 = fn;
		}
		else
		{
			if (c)
			{
				n1 = a1 % 1000000000;
				n2 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				c = 0;
			}
			fn2 = (n1 + n2);
			fn = a1 + a2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			a1 = a2;
			n1 = n2;
			n2 = fn;
			n2 = (fn2 % 1000000000);
		}
		if (((a1 + a2) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}

