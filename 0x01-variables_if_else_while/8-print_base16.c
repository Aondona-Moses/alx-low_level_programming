#include <stdio.h>

/**
 * main - Entry point
 *
 * Function: print single digit numbers
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 48)
	{
		if (num < 10)
			putchar(num + '0');
		else if (num > 41)
			putchar(num - 10 + 'A');
		num++;
	}
	putchar(10);
	return (0);
}
