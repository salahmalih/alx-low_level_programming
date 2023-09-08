#include <stdio.h>

/**
 * main - print the alphabet in lowercase letters
 * using  putchar and while
 *
 * Return: Always 0.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c = c + 1;
	}
	putchar('\n');
	return (0);
}
