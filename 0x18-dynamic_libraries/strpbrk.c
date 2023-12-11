#include "main.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes.
 * @s: Pointer to the string to be checked.
 * @accept: Set of bytes to search for.
 * Return: The pointer to the first occurrenceof a byte in 's' that matches
 * one of the bytes in 'byte', or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

