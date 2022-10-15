#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char lx;

	for (lx = 'z'; lx >= 'a'; lx--)
		putchar(lx);
	putchar('\n');
	return (0);

}
