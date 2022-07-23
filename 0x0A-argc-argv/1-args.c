#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of CL arguments
 * @argv: array that contains the program CL arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
