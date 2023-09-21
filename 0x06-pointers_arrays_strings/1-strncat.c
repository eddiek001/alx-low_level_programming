#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: outpur string
 * @src: input string
 * @n: no of element from src
 * Return: dest + no of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1, i;

	for (s1 = 0; dest[s1] != '\0'; s1++)
	{
	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[s1 + i] = src[i];
	}
	return (dest);
}
