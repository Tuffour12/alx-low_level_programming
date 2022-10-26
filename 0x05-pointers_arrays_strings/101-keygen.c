#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0
 */

int main(void)
{
	int pass[100];

	int q, sum, x;

	sum = 0;

	srand(time(NULL));

	for (q = 0; q < 100; q++)
	{	pass[q] =rand() % 78;
	
		sum += (pass[q] + '0');
		putchar(pass[q] + '0');
	
		if ((2772 - sum) - '0' < 78)
		{
			x = 2772 - sum - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}
	return (0);
}	
