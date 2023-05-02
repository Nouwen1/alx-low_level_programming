#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: total sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int q, sum = 0;

	va_start(ap, n);

	for (q = 0; q < n; q++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
