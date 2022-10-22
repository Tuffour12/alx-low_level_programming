#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @x: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int x)

{

	int cx, ro;



	if (x <= 0)

	{

		_putchar('\n');

	}

	else

	{

		for (cx = 1; cx <= x; cx++)
		{
			_putchar('#');
			for (ro = 2; ro <= x; ro++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}
