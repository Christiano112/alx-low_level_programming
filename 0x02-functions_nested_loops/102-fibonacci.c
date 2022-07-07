#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 * starting 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int a1, a2, fn1;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (c = 0; c < 48; c++)
	{
		fn1 = a1 + a2;
		printf(", %ld", fn1);
		a1 = a2;
		a2 = fn1;
	}
	printf("\n");
	return (0);
}
