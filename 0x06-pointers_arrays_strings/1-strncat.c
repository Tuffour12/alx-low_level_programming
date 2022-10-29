#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @e: e
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int e)

{

	int i, co;



	for (i = 0; dest[i] != '\0'; i++)

	{

	}



	for (co = 0; co < e; co++)

	{

		dest[i + co] = src[co];

		if (src[co] == '\0')

			co = e;

	}

	return (dest);

}
