#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: variable
 * Return: interger
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	if (head == NULL)
		return (0);

	aux = head;
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}



