#include "main.h"

/**
 * main - Entry point
 *
 * Function: print _putchar
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char letters[9] = "_putchar";
	int ch = 0;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(letters[ch]);
	}
	_putchar('\n');

	return (0);
}
