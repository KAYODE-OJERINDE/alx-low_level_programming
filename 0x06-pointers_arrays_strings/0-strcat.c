#include <stdio.h>
#include <string.h>

/**
 * _strcat - This function concatenates two strings
 * @dest - first param
 * @src - second param
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src; /* This concatinates source and destination */
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
