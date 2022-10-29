#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @x: elements of content
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int x)

{

	int i, temp;



	for (i = 0; i < x; i++)

	{

		x--;

		temp = a[i];

		a[i] = a[x];

		a[x] = temp;

	}

}
