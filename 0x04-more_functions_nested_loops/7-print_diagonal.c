#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)

{

	int dl, sp;

	if (n <= 0)

	{

		_putchar('\n');

	}

	else
	{
	
		for (dl = 1; dl <= n; dl++)
		{
			for (sp = 1; sp < dl; sp++)
			{
				_putchar(' ');

			}
			_putchar('\\');

			_putchar('\n');
		}
	}
}
