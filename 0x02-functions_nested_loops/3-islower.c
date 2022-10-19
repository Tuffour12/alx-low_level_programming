#include "main.h"
/**
 * _islower - Check for the lower case
 * @x: the character
 * Return: 1 if the letter is lowercase and 0 if not
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);

}
