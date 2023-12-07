#include <stdio.h>

/**
 * is_palindrome - This is function that checks if a number is a palindrome
 * @number: the number to be checked
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(int num)
{
	int main = num, rev = 0;

	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}

	return (main == rev);
}

/**
 * main - This function finds the largest palindrome made from product of two 3-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hi_palindrome = 0, times, a, b;
	FILE *file;

	for (a = 100; a < 1000; ++a)
	{
		for (b = 100; b < 1000; ++b)
		{
			times = a * b;
			if (is_palindrome(times) && times > hi_palindrome)
			{
				hi_palindrome = times;
			}
		}
	}

	file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", hi_palindrome);
		fclose(file);
	}
	else
	{
		printf("Error: Unable to open the file.\n");
		return (1);
	}

	return (0);
}
