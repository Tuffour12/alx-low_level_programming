#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write the character of c to standout
 * @c: The character to print
 * Return: On success 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
