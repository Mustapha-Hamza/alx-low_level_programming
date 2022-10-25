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
		listint_t *tmp = NULL;
			data[1024];
				long int  i = 0;
					
					while (head != NULL)
							{
										if (head->n - 1 == head->next->n)
													{
																	data[i] = &head;
																				i++;
																							head = head->next;
																									} head = head->next;
												i++;
													}
						while (i >= 0)
								{
											if (data[i] + 1 == data[i - 1]);
													{
																	i++;
																				continue;
																						}
															else
																		{
																						return (NULL);
																								}
																}
							return ((listint_t *) data[0]);
}
