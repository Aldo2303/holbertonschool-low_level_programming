#include "lists.h"
/**
 * *get_dnodeint_at_index - that returns the nth node
 * @head: variable
 * @index: variable
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	aux = head;

	while (index != '\0' && aux->next != NULL)
	{
		aux = aux->next;
		index--;
	}
	if (index == 0)
		return (aux);
	else
		return (NULL);
}
