#include "main.h"

/**
 *  _strlen - Function that returns the length of a string
 * @s: this is the input string
 * Return: Lenngth of the string
 */

int _strlen(char *s)

{

	int a;



	for (a = 0; s[a] != '\0' ; a++)

		;

	return (a);

}
