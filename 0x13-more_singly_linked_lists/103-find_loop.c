#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Find the loop inside a list
 * @head: Pointer to the start of a list
 *
 * Return: Address of where the loop starts, NULL if
 * no loop is found
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (head != NULL)
	{
		if (slow == fast)
		{
			while (head != NULL)
			{
				if (slow == fast)
					return (slow);
				slow = slow->next;
				fast = fast->next;
			}
		}
		slow = slow->next;
		fast = fast->next->next;
	}
}
