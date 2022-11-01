#include "main.h"

/**
 * _strspn - Entry point
 * @c: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *c, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == c[i])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
