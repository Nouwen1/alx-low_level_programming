#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer 
 * @array: array
 * @size: of array
 * @cmp: pointer to function to be used to compare
 * Return: 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]) !=0)
			return (q);
	}

	return (-1);
}
