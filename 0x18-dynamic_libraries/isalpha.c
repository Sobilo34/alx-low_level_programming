#include "main.h"

/**
 * _isalpha - The function checks for alphabetic character.
 *
 * @c: Argument of type int.
 *
 * Return: Returns 1 if the character is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	int alpha;
	
	alpha = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return (alpha);
}

