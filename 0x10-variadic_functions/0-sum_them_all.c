#include "variadic_functions.h"

/**
 * sum_them_all - function that calculates the sum
 * @n: number of arg in the function
 *
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
