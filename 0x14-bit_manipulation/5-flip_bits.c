#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 *
 * @n: The first number to compare.
 * @m: The second number to compare
 *
 * Return: The number of the bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int results = n ^ m;
	unsigned long int count = 0;

	while (results > 0)
	{
		if (results & 1)
			count++;
		results >>= 1;
	}

	return (count);
}
