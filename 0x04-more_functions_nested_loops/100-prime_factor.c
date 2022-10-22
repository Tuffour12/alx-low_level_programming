#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9)
 *
 * Return: Always 0
 */

int main(void)
{
	long t, h;

	t = 612852475143;



	for (h = 2; t > h; h++)
	{
		while (t % h == 0)
		{
			t = t / h;

		}
	}
	printf("%lu", h);

	putchar('\n');

	return (0);
}
