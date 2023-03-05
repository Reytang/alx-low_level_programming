#include "main.h"

/**
 * int_strspn - function
 * @s: is a string
 * @accept: string that accepts
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;
	int accept_len = strlen(accept);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (j == accept_len)
		{
			return (len);
		}
	}
	return (len);
}
