#include <stdio.h>
/**
 * main - Entry point
 *
 * Function: print letters except q and e
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
