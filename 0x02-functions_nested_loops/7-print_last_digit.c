#include "main.h"

/**
 * print_last_digit- prints the last digit of an integer
 * @j: divide the number by 10
 * Return: i
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
