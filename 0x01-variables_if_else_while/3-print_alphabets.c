#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print letter in upper case
 *
 * Return: Alway 0
 */
int main(void)
{
	char uc;
	
	for (uc = 'a'; uc <= 'z; uc++)
	{
		putchar(uc);
	}

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0)
}
