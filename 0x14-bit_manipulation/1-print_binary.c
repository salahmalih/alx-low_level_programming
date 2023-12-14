#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros = 1;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
	{
		printf("0");
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			leading_zeros = 0;
			printf("1");
		}
		else if (!leading_zeros)
		{
			printf("0");
			}

		mask >>= 1;
	}
}
