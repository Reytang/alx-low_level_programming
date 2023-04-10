#include "main.h"

/**
 * get_endianness - function of the prototype
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endian = (char *)&numb;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}