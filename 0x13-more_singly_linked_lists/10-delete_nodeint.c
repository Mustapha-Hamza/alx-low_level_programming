#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given index in a list
 * @head: Pointer to a pointer to the start of the list
 * @head: Pointer to a pointer to the start of the list
 *
 * @head: Pointer to a pointer to the start of the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count;

	if (head == NULL)
		return (-1);
	count = 0;
	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (index == 0)
			free(current);
		return (1);
	}
	while (count != index)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		count++;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
