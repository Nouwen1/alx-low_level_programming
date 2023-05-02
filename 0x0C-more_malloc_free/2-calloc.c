#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array of number
 *
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	char *ch;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(size * nmemb);

	if (cal == NULL)
		return (NULL);

	ch = cal;

	for (a = 0; a < (size * nmemb); a++)
		ch[a] = '\0';

	return (cal);
}
