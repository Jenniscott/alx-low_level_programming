#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storged char
 * Return: poiter of an array of chhars
 */
char *create_array(unsigned int size, char c)
{
	char *c;
	unsigned int i;

	if (size == 0)
		return (NULL);
	c = malloc(sizeof(c) * size);
	if (c == NULL)
		return (NULL);
	for (i=0; i < size; i++)
		c[i] = c;
	return (c);
}

