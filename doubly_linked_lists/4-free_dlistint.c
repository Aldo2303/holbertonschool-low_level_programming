#include "lists.h"
/**
 * free_dlistint - free dlistint list
 * @head: variable
 */
void free_dlistint(dlistint_t *head)
{
		dlistint_t *aux;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->prev);
	}
	free(aux);
}
