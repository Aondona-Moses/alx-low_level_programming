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
	for (int a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || 'e')
		{
			continue;
		}
		else
		{
			putchar(a);
		}
	return (0);
}
