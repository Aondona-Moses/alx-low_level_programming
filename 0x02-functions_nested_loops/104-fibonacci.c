#include <stdio.h>

/**
 * main - printthe first 98 Fibonaccisequence
 * starting with 1 and 2
 * followed by a new line
 * Return: Always (0) (Success)
 */
int main(void)
{
	usigned long int a, b, c, b1, b2, c1, c2;

	b = 1;
	c = 2;

	print("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	b1 = b / 10000000000;
	b2 = b % 10000000000;
	c1 = c / 10000000000;
	c2 = c % 10000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", c1 + (c2 / 10000000000));
		printf("%lu", c2 % 10000000000);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}

	printf("\n");

	return (0);
}
