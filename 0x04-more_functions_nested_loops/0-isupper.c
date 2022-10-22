#include "main.h"



/**
 * _isupper - a function that will check for uppercase character
 * @u: The character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int u)

{

	if ((u >= 'A') && (u <= 'Z'))

		return (1);

	else

		return (0);

}
