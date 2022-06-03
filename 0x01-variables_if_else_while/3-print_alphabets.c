#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: Print uppercase and lowercase
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int ch, up;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);
	putchar('\n');
	return (0);
}
