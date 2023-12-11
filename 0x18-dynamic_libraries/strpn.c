#include "main.h"

/**
 * _strspn - To get the length of a prefix substring.
 * @s: The ointer to the string to be checked.
 * @accept: The pointer to the string containing the characters to match.
 * Return: The matching length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int the_match = 0;

	while (*s && strchr(accept, *s))
	{
		the_match++;
		s++;
	}

	return (the_match);
}

