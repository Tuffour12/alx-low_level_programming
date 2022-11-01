#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @x: input
 * @a: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *x, char a)
{
	int i;

	for (i = 0; x[i] >= '\0'; i++)
	{
		if (x[i] == a)
			return (x + i);
	}

	return (NULL);
}
