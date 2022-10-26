#include "main.h"

/**
 * rev_string - This fuction print a string reverser
 * @s: this is the pointer that point to a string
 */



void rev_string(char *s)

{

	char rs = s[0];

	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rs = s[i];
		s[i] = s[c];
		s[c] = rv;
	}




}
