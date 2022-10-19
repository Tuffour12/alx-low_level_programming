#include "main.h"
/**
 * print_last_digit - Print the last digit
 * @t: the character
 * Return: The last value
 */
int print_last_digit(int t)
{
	if (t < 0)

		t = t * -1;

	_putchar((t % 10) + '0');

	return (t % 10);

}


