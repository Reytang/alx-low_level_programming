#include "main.h"

/**
 * print_sign - print the sign
 * @n: int of the number
 *
 * Return: to -1, 0, 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
