#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: print 10x lowercase letters
 *
 * Return: Always (0) (Success)
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
}
void print_alphabet_x10(void)
{
	int i, ch;

	for (i=1; i<=10; i++)
	{
		for (ch = 97; ch<=122; ch++)
		{
			putchar(ch);
		}
		putchar(10);
	}
}
