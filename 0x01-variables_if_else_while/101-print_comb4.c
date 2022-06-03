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
	int num1, num2, num3;

	num1 = 48;
	num2 = 48;
	num3 = 48;

	while (num1 < 58)
	{
		num2 = num1 + 1;
		while (num2 < 58)
		{
			num3 = num2 +1;
			while (num3 < 58)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 < 55 || num2 < 56 || num3 < 57)
				{
					putchar(44);
					putchar(32);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar(10);
	return (0);
}
