#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers
 *@n: the intial number
 *Return: Always 0
 */
int print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)

			printf("%d, ", n++);

		printf("%d\n", 98);

		else
		{
			for (n > 98)

				printf("%d, ", n--);

			printf("%d\n", 98);
		}
	}
}
