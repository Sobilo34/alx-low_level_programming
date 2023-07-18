#include "main.h"
/**
 * _lsalpha - Checks for alphabetic order
 *
 * @c: alphabet to check for
 *
 * Return: 1 if c is a leter, 0m otherwise
 */
int _lsalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
