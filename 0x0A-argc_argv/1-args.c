#include <stdio.h>
#include "main.h"
/**
 * Main - print number of arg passed
 *@argc: argument 1
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
