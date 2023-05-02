#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w = 0, x = 0, y = 0, z = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[y])
		y++;

	if (n >= y)
		z = w + y;
	else
		z = w + n;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);

	y = 0;
	while (x < z)
	{
		if (x <= w)
			str[x] = s1[x];

		if (x >= w)
		{
			str[x] = s2[y];
			y++;
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}
