#include "main.h"

/**
 * print_number -  checks for checks for a digit (0 through 9)
 * @x: x -  Variable
 * Return: Always 0.
 */

void print_number(int x)
{
	unsigned int z;

	int m, b;



	b = 10;

	if (x < 10 && x >= 0)
	{
		_putchar (x + '0');
	}
	else if (x > -10 && x < 0)
	{
		x = x - 2 * x;

		_putchar('-');

		_putchar (x + '0');
	}
	else
		if (x < 0)
		{
			x = x * -1;

			_putchar ('-')
		}
		z = x;
	while (z / b > 9)
	{
		b = b * 10;
	}
	while (b > 0)
	{
		m = z / b;

		z = z % b;

		_putchar (m + '0');

		b = b / 10;
	}
}
