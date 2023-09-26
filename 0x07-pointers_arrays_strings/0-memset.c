#include "main.h"
/**
 * _memset - block of memory with a specific value
 * @s: address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
