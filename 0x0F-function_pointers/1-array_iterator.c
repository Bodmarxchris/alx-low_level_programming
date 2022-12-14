#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @array: where elements will be stored
 * @action: function to call for each element of array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
