#include "main.h"

/**
 * more_numbers - function that will prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 and new line
 */

void more_numbers(void)
{
	int i, tx;

	for (tx = 0; tx < 10; tx++)

	{

		for (i = 0; i <= 14; i++)

		{
			if (i >= 10)

			{

				_putchar((i / 10) + '0');

			}

			_putchar((i % 10) + '0');

		}
		_putchar('\n');
	}
}
