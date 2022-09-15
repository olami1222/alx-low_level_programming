#include "main.h"
/**
 * print_line - draw a straight line
 *  @n: number of times
 *  Description: Can only use putchar
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
