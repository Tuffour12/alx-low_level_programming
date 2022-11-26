#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_line;

	new_line = malloc(sizeof(list_t));
	if (new_line == NULL)
	{
		return (NULL);
	}

	new_line->str = strdup(str);
	if (!new_line->str)
	{
		free(new_line);
		return (NULL);
	}
	new_line->len = _strlen_recursion(new_line->str);
	new_Line->next = *head;
	*head = new_line;

	return (new_line);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
