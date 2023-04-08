#include "main.h"

/**
 * binary_to_uint - function of the prototype
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0, mult = 1;
	int lenght;

	for (lenght = 0; b[lenght];)
	{
		lenght++;
	}
	for (lenght -= 1; lenght >= 0; lenght--)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}
		numb += (b[lenght] - '0') * mult;
		mult *= 2;
	}
	return (numb);
}
