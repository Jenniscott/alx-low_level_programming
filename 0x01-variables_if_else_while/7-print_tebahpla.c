#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{

		putchar(ch);
		ch--;

	}

	putchar('\n');

	return (0);
}
