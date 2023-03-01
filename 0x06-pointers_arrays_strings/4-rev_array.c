#include "main.h"

/**
 * reverse_array - function
 * @a: values for interger a
 * @n: the number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tem;

	for (i = 0; i < n / 2; i++)
	{
		tem = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tem;
	}
}
