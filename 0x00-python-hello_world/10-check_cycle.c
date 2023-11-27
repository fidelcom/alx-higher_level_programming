#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - function to checks if a singly linked list has a cycle in it.
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *first = list;
	listint_t *second = list;

	if (!list)
		return (0);

	while (1)
	{
		if (first->next != NULL && first->next->next != NULL)
		{
			first = first->next->next;
			second = second->next;

			if (first == second)
				return (1);
		}
		else
			return (0);
	}

}
