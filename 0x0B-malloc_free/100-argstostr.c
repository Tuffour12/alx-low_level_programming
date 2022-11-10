#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 *
 * @ac: Argument total count
 *
 * @av: Pointer to arguments
 *
 * Retunr: Pointer to concatenated string (SUCCESS) or
 * NULL if @ac == 0 or @av == NULL (FAILURE) or
 * NULL if if insufficient memory was available (FAILURE)
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int count = 0;
	int t_count = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			t_count++;

		t_count++;
	}

	result = malloc(sizeof(char) * t_count + 1);

	if (result == NULL)
	{
		return ('\0');
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			result[count++] = av[x][y];
		}
		result[count++] = '\n';
	}

	result[t_count] = '\0';
	return (result);
}

