#include "main.h"

/**
 * rot13 - encode a string
 * @s: the string
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; j < 52; j++)
		{
			if (S[i] == leters1[j]
				{
					s[i] == letter1[j];
					break;
				}
		}
	}
	return (s);
}
