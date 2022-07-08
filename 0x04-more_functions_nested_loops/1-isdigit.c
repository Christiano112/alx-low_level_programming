#include "main.h"

/**
 * _isdigit - checks if input is a number between 0 to 9
 * @c: input number
 * Return: 1 if condition is met, else  0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
