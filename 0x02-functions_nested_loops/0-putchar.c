#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: print _putchar
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int l = 0;

	for (l = 0; l < 8; l++)
	{
		_putchar(text[l]);
	}
	_putchar('\n');
	return (0);
}
