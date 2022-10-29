#include "main.h"

/**
 * leet - Entry point
 * One if, Two loops only
 * @x: input
 * Return: Always 0 (Success)
 */

char *leet(char *x)
{
	int i, v;

	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; x[i] != '\0'; i++)
	{
		for (v = 0; v <= 9; v++)

		{
			if (x[i] == find[v])
			{
				x[i] = replacer[v / 2];
				v = 9;
			}
		}

	}
	return (x);

}
