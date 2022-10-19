#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @z: charcter
 *
 * Return: 1 if character is alphabet and 0 otherwise
 */
int _isalpha(int z)
{
	if ((z >= 'a' && z <= 'z') || (z >= 'A' && z <= 'Z'))
		return (1);

	else
		return (0);


}	
