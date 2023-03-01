#include <stdio.h>
#include <string.h>

/**
 * _strcat - This function concatenates two strings
 * @dest - prints the first parameter
 * @src - prints the second parameter
 * Return: a Character
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
