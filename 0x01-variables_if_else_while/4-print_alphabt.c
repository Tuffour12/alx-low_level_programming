#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);
	}

	putchar('\n');
	return (0);
}
