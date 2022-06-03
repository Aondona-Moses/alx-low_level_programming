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

	num = 122;

	while (num > 96)
	{
		putchar(num);
		num--;
	}
	putchar(10);
	return (0);
}
