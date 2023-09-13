#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a'

	for (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
