#include"function_pointers"
/**
 * array_iterator - iterator thru array
 * @array: input array
 * @action: function point
 * @size: size array#include <stdio.h
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
