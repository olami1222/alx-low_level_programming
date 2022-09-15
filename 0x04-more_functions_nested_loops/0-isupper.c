#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: int type number
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
