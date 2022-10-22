#include "main.h"


/**
 * print_triangle - Prints a triangle
 * @s: sets the size of the triangle
 * Return: nothing
 */


void print_triangle(int s)

{

	int i, j;



	if (s > 0)

		for (i = s; i > 0; i--)
		{
			for (j = 1; j <= s; j++)

				if (j >= i)

					_putchar('#');
				else

					_putchar(' ');


			_putchar('\n');
		}

	else

		_putchar('\n');

}
