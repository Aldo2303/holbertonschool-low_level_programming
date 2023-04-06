#include "lists.h"
/**
 * *add_dnodeint_end - prints adds a new node at the end of a dlistint_t list
 * @head: variable
 * @n: variabel
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = newNode;
		newNode->prev = aux;
	}
	return (newNode);
}
