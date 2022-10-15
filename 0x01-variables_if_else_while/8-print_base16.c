#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int bs;

	char lx;

	for (bs	= 0; bs < 10; bs++)
		putchar((bs % 10) + '0');
	for (lx = 'a'; lx <= 'f'; lx++)
		putchar(lx);

	putchar('\n');
	return (0);
}
