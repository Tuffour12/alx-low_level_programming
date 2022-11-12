#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int y, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (y = 1; y < argc; y++)
	{
		for (j = 0; argv[y][j] != '\0'; j++)
		{
			if (argv[y][j] > 57 || argv[y][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
