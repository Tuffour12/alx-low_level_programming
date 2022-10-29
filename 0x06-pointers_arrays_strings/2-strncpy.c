#include "main.h"



/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @x: input number of char
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int x)

{

	int i;



	for (i = 0; src[i] != '\0'; i++)

	if (i < x)

		dest[i] = src[i];

	while (i < x)

		dest[i++] = '\0';



	return (dest);
}
