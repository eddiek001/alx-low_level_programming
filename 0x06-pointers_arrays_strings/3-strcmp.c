#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: (0) if they are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	for (i = 0; s1[i] != '\0' && j == 0; i++)
	{
		j = s1[i] - s2[i];
	}
	return (j);
}
