#include "lists.h"

/**
 * insert_node - function that insert number into sorted singly linked list
 * @head: pointer to head of linked list
 * @number: data for new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp = NULL;
	listint_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		(*head)->next = NULL;
		return (new);
	}
	if (!(*head)->next)
	{
		if ((*head)->n < new->n)
			(*head)->next = new;
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}

	tmp = *head;
	while (tmp->next)
	{
		if (new->n < tmp->n)
		{
			new->next = tmp;
			*head = new;
			return (new);
		}
		if (((new->n > tmp->n) && (new->n < (tmp->next)->n)) ||
		    (new->n == tmp->n))
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}
