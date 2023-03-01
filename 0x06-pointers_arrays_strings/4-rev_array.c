#include "main.h"

/**
 * reverse_array - This function reverses array of integers
 * @a: array to reverse
 * @n: int of array
 * Return: void (success)
 */

void reverse_array(int *a, int n)
{
	int j, b;

	for (j = 0; (j < (n - 1) / 2); j++)
	{
	b = a[j];
	a[j] = a[n - 1 - j];
	a[n - 1 - j] = b;
	}
}
