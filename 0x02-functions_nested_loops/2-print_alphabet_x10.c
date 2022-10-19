#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char c;

	for (ten = 0; ten <= 9; ten++)

	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	}


	_putchar('\n');
}
