#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: Print pars of double numbers
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int num, num1, num2, num3;

	num = 48;
	while (num < 58)
	{
		num1 = 48;
		while (num1 < 58)
		{
			num3 = num1 + 1;
			num2 = num;
			while (num2 < 58)
			{
				while (num3 < 58)
				{
					putchar(num);
					putchar(num1);
					putchar(32);
					putchar(num2);
					putchar(num3);
					if (num < 57 || num1 < 56 || num2 < 57 || num3 < 57)
					{
						putchar(44);
						putchar(32);
					}
					num3++;
				}
				num3 = 48;
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar(10);
	return (0);
}
