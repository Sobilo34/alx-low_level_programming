#include "main.h"
/**
 * jack_baver - prints every minute of the day of Jack Baver
 *
 * starting from 00:00 to 23:59
 *
 */
void jack_baver(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			i++;
		}
		j++;
	}
}
