#include "search_algos.h"

/**
 * linear_search - search linearly
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t p;

	if (!array)
		return (-1);

	p = 0;
	while (p < size)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
		p++;
	}
	return (-1);
}
