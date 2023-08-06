#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to printed
 *
 * Return: On success 1.
 * On error, -1 is returned and arrno is set appropriately.
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
