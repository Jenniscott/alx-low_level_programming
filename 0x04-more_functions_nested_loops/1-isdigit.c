#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0 through 9) 
 * @c: The number to be checked 
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
