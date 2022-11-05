#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @x: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int x)
{
	int count = 0;

	while (x != 0)
	{
		if (x % 10 == 9 || x % 10 == 7)
			x -= 2;
		else if (x % 25 == 0)
			x -= 25;
		else if (x % 10 == 0)
			x -= 10;
		else if (x % 5 == 0)
			x -= 5;
		else if (x % 2 == 0)
		{
			if (x % 10 == 6)
				x -= 1;
			else
				x -= 2;
		}
		else
			x -= 1;

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(i);

		printf("%d\n", coin);
	}

	return (0);
}
