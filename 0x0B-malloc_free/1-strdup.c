#include "main.h"
#include <string.h>

/**
 * *_strdup - fuction of the prototype
 * @str: string
 * Return: to NULL
 */

char *_strdup(char *str)
{
	char *copy = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
