#include <stdio.h>
#define NAME

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	#ifdef NAME
		printf("%s\n", __FILE__);
	#endif
	return (0);
}
