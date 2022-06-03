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
	int num1, num2;

	num1 = 48;
	num2 = 48;

	while (num1 < 58)
	{
		num2 = 48;
		while (num2 < 58)
		{
			putchar(num1);
			putchar(num2);

			if (num1 < 57 || num2 < 57)
			{
				putchar(44);
				putchar(32);
			}
			num2++;
		}
		num1++;
	}
	putchar(10);
	return (0);
}
