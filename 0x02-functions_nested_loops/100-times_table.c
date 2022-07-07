#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, mu;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				mu = a * b;
				_putchar(44);
				_putchar(32);
				if (mu <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mu + 48);
				}
				else if (mu <= 99)
				{
					_putchar(32);
					_putchar((mu / 10) + 48);
					_putchar((mu % 10) + 48);
				}
				else
				{
					_putchar(((mu / 100) % 10) + 48);
					_putchar(((mu / 10) % 10) + 48);
					_putchar((mu % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
