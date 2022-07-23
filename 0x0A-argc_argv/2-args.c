#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc:  number of CL atguments
 * @argv: array that contains the program CL arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
