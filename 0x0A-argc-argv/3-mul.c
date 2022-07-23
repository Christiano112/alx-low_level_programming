#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: number of CL arguments
 * @argv: array that contains the program CL arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
