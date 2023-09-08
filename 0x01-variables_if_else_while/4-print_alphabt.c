#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c == 'q' || c == 'e')
	{
	c = c + 1;
	}
	putchar(c);
	c = c + 1;
	}
	putchar('\n');
	return (0);
}
