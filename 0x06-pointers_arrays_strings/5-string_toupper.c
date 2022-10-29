#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @c: input string
 * Return: capitialized string
 */

char *string_toupper(char *c)

{

	int i;



	for (i = 0; c[i] != '\0'; i++)

	{

		if (c[i] >= 'a' && c[i] <= 'z')

			c[i] = c[i] - 32;

	}

	return (c);

}
