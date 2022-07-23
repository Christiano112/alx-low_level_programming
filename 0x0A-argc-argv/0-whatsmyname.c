#include <stdio.h>

/**
 * main - prints its name, followed ny a new line
 * @argc: number of command line arguments
 * @argv: array that contains the program arguments
 * Return: 0 if successful
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
