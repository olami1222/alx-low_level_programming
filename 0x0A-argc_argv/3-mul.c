#include <stdio.h>
#include "main.h"
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true,1 if false
 */
int main(int argc, char *argv[])
{
	int night, spike;

	if (argc == 3)
	{
		night = atoi(argv[1]);
		spike = atoi(argv[2]);

		printf("%d\n", night * spike);
		return (0);
	}
	printf("Error\n");
	return (1);
}
