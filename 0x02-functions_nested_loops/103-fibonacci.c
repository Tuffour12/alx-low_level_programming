#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Fibonacci sequence is generated
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long count, a, b, c, sums;

	a = sums = 0;

	b = 1;
	for (count = 0; count < 50; count++)
	{
		c = a + b;

		a = b;

		b = c;
		if (c % 2 == 0 && c < 4000000)

		{
			sums += c;

		}
	
	}

	printf("%lu\n", sums);
	return (0);
}

