#include "main.h"
/**
 * _strncpy - copy a string
 *
 * @dest: destination
 * @src: source
 * @n: no of string
 * Return: return (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
