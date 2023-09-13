#include "search_algos.h"

/**
 * print_c - function of the prototype
 * @array: array
 * @c: index checked
 */
void print_c(int *array, size_t c)
{
	printf("Value checked array[%lu] = [%d]\n", c, array[c]);
}

/**
 * interpolation_search - function of the prototype
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = size - 1;
	size_t poss;

	if (array == NULL)
		return (-1);

	poss = a + (((double)(a - b) / (array[b] - array[a]))
		   * (value - array[a]));
	while (poss < size)
	{
		print_c(array, poss);
		if (array[poss] == value)
			return (poss);
		else if (array[poss] < value)
			b = poss + 1;
		else
			b = poss - 1;
		poss = a + (((double)(b - a) / (array[b] - array[a]))
			   * (value - array[a]));
	}
	printf("Value checked array[%lu] is out of range\n", poss);
	return (-1);
}
