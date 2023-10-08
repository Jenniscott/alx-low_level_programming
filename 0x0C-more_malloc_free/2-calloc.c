#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: Number of data members(spaces) in the memory.
 * @size: size of each data space required.
 * Return: pointer with the address of the array created .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		m[i] = 0;
	}
	return (m);
}
