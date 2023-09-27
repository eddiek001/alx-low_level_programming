#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: input
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0')
		return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
