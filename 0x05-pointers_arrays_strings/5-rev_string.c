#include "main.h"
/**
 * rev_string - returns the length of a string.
 * @s: array with the characters of the word
 * Return: Always 0.
 */
void rev_string(char *s)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
