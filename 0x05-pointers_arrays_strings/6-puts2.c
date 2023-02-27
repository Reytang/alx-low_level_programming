#include "main.h"
#include <string.h>

/**
 * puts2 - prints every  other character of a string.
 * @str: the string to use.
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
	{
		for (k = 0; k < i; k += 2)
		{
			_putchar(str[k]);
		}
		i++;
	}
	_putchar('\n');
}
