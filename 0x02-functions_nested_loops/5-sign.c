#include "main.h"
/**
 * print_sign - Print a sign of anumber
 * @x: the character
 * Return: 1 if number is greater than zero
 * 0 of number is zero
 * -1 if number is less than zero
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}

