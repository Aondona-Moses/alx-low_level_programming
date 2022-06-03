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

	num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar(10);
	return (0);
}
