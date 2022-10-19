#include "main.h"
/**
 * print_last_digit - Print the last digit
 * @t: the character
 * Return: The last value
 */
int print_last_digit(int t)
{
	int ld =  t % 10;
	
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);

}


