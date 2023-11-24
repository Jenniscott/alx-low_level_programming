#include "main.h"
/**
 * print_bi - function that prints the binary representation of a number recursively
 *
 * @n:decimal input
 *
 * Return: Void
 */

void print_bi(unsigned long int n)
{
	if (n ==0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: decimal to be converted
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else 
	{
		print_bi(n);
	}

}


