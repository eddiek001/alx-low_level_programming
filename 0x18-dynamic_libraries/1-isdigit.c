#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: checks the parameter
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
