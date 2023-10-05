#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *space;
	unsigned int i, m, n, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (m = 0; s2[m] != '\0'; m++)
		;
	space  = malloc(sizeof(char) * (i + m + 1));
	if (space  == NULL)
	{
		free(space);
		return (NULL);
	}
	for (n= 0; n < i; n++)
		space[n] = s1[n];
	limit = m;
	for (m = 0; m <= limit; n++, m++)
		space[m] = s2[n];
	return (space);
}
