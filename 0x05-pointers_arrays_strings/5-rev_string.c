#include "main.h"

#include <stdio.h>

/**
 * rev_string - This fuction print a string reverser
 * @s: this is the pointer that point to a string
 */



void rev_string(char *s)

{

	int a, count;



	char *start, *end = s;



	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)

	{

		end++;

	}
	count = a + 1;

	start = s;

	for (a = 0; a < count / 2; a++)

	{

		char x;

		x = *end;

		*end = *start;

		*start = x;

		start++;
		end--;

	}
	end[count + 1] = '\0';

}
