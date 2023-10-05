#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (l = 0; l <= i; l++)
		copy[l] = str[l];
	return (copy);
}
