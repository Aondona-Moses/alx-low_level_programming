#include <stdio.h>
/**
 * main - Entry point
 *
 * Functions: Prints lowercase letters
 *
 * Return: Always (0) (Success)
 */
void print_alphabet();

int main(void)
{
	print_alphabet();
}
void print_alphabet()
{
	int ch;

	for (ch = 97; ch <=122; ch++)
	{
		putchar(ch);
	}
	putchar(10);
}
