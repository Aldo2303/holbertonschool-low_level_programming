#include "lists.h"
/**
 * *add_dnodeint - that adds a new node at the beginning of a dlistint_t list
 * @head: variable
 * @n: variable
 * Return: dlistint_t that is data structure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (*head == NULL)
		newNode->next = NULL;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}

	*head = newNode;
	return (newNode);
}
