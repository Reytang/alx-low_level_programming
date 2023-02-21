#include "main.h"

/**
 * _islower - print only lowercase keys
 *
 * Return: To 0 or 1
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
