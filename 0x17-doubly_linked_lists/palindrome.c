#include <stdio.h>

/**
 * is_palindrome - checks if a number is a palindrome
 * @number: the number to be checked
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(int number)
{
	int original = number;
	int reverse = 0;

	while (number > 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}

	return (original == reverse);
}

/**
 * main - finds the largest palindrome made from product of two 3-digit numbers
 * and saves the result in the file "102-result"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int max_palindrome = 0, product, j, i;
	FILE *file;

	for (i = 100; i < 1000; ++i)
	{
		for (j = 100; j < 1000; ++j)
		{
			product = i * j;
			if (is_palindrome(product) && product > max_palindrome)
			{
				max_palindrome = product;
			}
		}
	}

	file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", max_palindrome);
		fclose(file);
	}
	else
	{
		printf("Error: Unable to open the file.\n");
		return (1);
	}

	return (0);
}
