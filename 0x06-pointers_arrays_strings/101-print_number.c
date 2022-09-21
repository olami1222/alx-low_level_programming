#include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	putchar((num % 10) + '0');
}
