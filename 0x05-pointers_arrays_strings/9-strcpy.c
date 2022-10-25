#include "main.h"

/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the source
 * Return: This return copy
 */

char *_strcpy(char *dest, char *src)

{

	char *begins = dest;



	while (*src != '\0')

	{

		*dest = *src;

		dest++;

		src++;

	}

	*dest = '\0';

	return (begins);

}
