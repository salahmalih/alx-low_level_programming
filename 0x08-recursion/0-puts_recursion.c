#include "main.h"
/**
 * puts recursion - Write a function that prints a string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s){
	int i=1;
	if(*s){
		_putchar(*s);
		_puts_recursion(s+i);
	}
	else{
		_putchar('\n');
	}

}