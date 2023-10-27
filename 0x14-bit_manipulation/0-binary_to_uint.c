#include "main.h"
/**
 * binary_to_uint - convery binary to number
 *
 * @b: a char pointer to a str
 *
 * Return: converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, j, sum, power;
	int base;

	base = 2;
	sum = 0;
	power = 1;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
			return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = len - 1; j > 0; j--)
		power = power * base;
		sum = sum + (power * (b[i] - 48));
		len--;
		power = 1;
	}
	return (sum);
}
