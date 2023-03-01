#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: destination char
 * @src: source char
 * @n: This shows length of int
 * Return: string dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && *(src + j); j++)
	{
		*(dest + j) = *(src + j);
	}
	for (; j < n; j++)
	{
	*(dest + j) = '\0';
	}
	return (dest);
}
