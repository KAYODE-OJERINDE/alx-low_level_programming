#include "main.h"

/**
 * _isalpha - checs for char alphabet
 * @c: the char to be checeked
 *
 * Return: if chrr letter lower or upper, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
