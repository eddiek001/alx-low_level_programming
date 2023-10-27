#include "main.h"
/**
 * set_bit - set the bit of a number to 1
 *
 * @n: pointer to the bit to be manipulated
 * @index: position of the bit
 *
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
