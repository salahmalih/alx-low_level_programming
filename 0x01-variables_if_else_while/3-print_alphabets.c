#include <stdio.h>
  
/**
 * main - print the alphabet in lowercase letters, and then in uppercase
 * using  putchar and while
 *
 * Return: Always 0.
 */

#include <stdio.h>

int main(void) {
	char c = 'a';

	while (c <= 'z' || c <= 'Z') {
	putchar(c);
	if (c == 'z' )
	{
	c = 'A';
	}
	if(c == 'Z')
	{
	putchar('$');
	putchar('\n');
	return 0;
	}
	c = c + 1;
	}
	return 0;
}
