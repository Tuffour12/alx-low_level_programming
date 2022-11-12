#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	x = malloc(l);

	if (x == NULL)
		return (NULL);

	while (i < l)
	{
		x[i] = 0;
		i++;
	}

	return (x);
}
