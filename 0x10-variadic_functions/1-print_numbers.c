#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int q;
	int num;
	va_list str;

	va_start(str, n);

	for (q = 0; q <n; q++)
	{
		num = va_arg(str, int);
		printf("%d", num);

		if (separator != NULL && q != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(str);

	printf("\n");
}
