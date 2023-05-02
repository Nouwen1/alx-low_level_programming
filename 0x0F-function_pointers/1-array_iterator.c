#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print each array
 * @array: array
 * @size: of array
 * @action: pointer to function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array == NULL || action == NULL)
		return;
	for (f = 0; f < size; f++)
	{
		action(array[f]);
	}
}
