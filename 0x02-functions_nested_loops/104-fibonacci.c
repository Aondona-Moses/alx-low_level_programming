#include <stdio.h>

/**
 * main - prints the first 100 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	short int sum;
	short int first, second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 99)
	{
		sum = first + second;
		printf("%i, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%i\n", sum);

	return (0);
}
