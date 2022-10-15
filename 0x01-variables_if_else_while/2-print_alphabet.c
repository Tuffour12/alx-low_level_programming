#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program the print a lower case follow by a new line
 *
 * Return: Alway 0
 */
int main(void)
{
	char lz;

	for (lz = 'a'; lz <= 'z'; lz++)
	{
		putchar(lz);
	}
	putchar('\n');
	return (0);
}

