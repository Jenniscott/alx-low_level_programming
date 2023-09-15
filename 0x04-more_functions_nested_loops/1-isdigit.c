#include "main.h"

/**
 * _isdigit - Check if a character is a digit 
 * @c: The nymber to be checked 
 * Return: 0 and 1
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
