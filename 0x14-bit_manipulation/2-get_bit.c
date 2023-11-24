#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: value to check bits
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: integar 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
