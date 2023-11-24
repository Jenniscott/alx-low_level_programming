#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * Description: prints out the convertion of a binary number
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		num <<= 1;
		if (b[k] == '1')
			num += 1;
	}
	return (num);
}
