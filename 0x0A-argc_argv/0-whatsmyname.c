#include <stdio.h>
#include "main.h"
/**
 * main - prints a program
 * @argc: first argument
 * @argv: argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
