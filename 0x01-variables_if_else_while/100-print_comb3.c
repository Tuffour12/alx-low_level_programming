#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program that prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;
	for (x = 0; x < 9; x++)	
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');

			putchar((y % 10) + '0');	
			if (digit1 == 8 && digit2 == 9)

				continue;
			putchar(',');

		}	putchar(' ');
	}
	putchar('\n');
	return (0);
}	
