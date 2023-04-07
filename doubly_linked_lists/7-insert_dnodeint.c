#include "lists.h"
/**
 * *insert_dnodeint_at_index - that inserts a new node at a given position
 * @h: variable
 * @idx: variable
 * @n: variable
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *aux;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = *h;
	while (idx != '\0' && aux->next != NULL)
	{
		aux = aux->next;
		idx--;
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	else if (idx == 0)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (!newNode)
			return (NULL);

		newNode->n = n;

		newNode->next = aux;
		newNode->prev = (aux->prev);
		(aux->prev)->next = newNode;
		aux->prev = newNode;

		return (newNode);
	}
	else
		return (NULL);
}
