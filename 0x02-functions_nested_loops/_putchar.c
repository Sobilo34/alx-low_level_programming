#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c:  THe character to print
 *
 * Return: POn success 1
 * On error, -1 is returned , and errno is not appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
