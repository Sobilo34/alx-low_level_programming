#include <stdio.h>

/**
 * main - prints the nmber from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
