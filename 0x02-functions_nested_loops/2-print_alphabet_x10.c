#include "main.h"
/**
 * print_alphabet_x10 - print lowercase letters
 *
 * Description: Print alphabets
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{

		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
		_putchar('\n');
	}
}
