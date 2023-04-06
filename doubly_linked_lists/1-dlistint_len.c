#include "lists.h"
/**
 * dlistint_len - function returns the number of elements list
 * @h: variable
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
