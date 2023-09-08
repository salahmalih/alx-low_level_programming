#include <stdio.h>
  
/**
 * main - print the alphabet in lowercase letters, and then in uppercase
 * using  putchar and while
 *
 * Return: Always 0.
 */


int main() {
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c = c + 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
	putchar(c);
	c = c + 1;
	}
	putchar('\n');
	return 0;
}
