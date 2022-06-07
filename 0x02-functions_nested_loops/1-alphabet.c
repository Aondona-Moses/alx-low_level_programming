#include <stdio.h>
/**
 * main - check the code
 *
 * Functions: Prints lowercase letters
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++
	}
	_putchar('\n');
}
