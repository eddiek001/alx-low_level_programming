#include <stdio.h>
#include "main.h"

/*
 * main - prints name of the program
 * @argc: entry point
 * @argv: number of strings
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

