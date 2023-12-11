#include "main.h"

/**
 * _strcmp - This is the functio that will be used to compare two strings
 * @s1: The first sring to compare
 * @s2: The second string to be compared to
 * Return: 0 if strings are equal, value greater than zero
 * if s1 > s2 and value less than zero if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
		return (-1);
	else
		return (1);
}
