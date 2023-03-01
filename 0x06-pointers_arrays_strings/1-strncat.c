#include "main.h"

/**
 * _strncat - this function concatinates two strings
 * @src: first parameter
 * @dest: second parameter
 * @n:length of parameter
 * Return: char
 */

char *_strncat(char *dest, char *src, int n) /* Prototype */
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
