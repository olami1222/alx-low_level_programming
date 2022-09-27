#include "main.h"
/**
 * _strstr - first occurence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *night1, *night2;

	while (*haystack != '\0')
	{
		night1 = haystack;
		night2 = needle;

		while (*haystack != '\0' && *night2 != '\0' && *haystack == *night2)
		{
			haystack++;
			night2++;
		}
		if (*night2 == '\0')
			return (night1);
		haystack = night1 + 1;
	}
	return (0);
}
