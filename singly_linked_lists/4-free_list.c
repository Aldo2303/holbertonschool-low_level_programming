#include "lists.h"
/**
 * free_list - free list_t list
 * @head: variable
 */
void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		/*igualo para obtener la direccion de memoria de head*/
		aux = head;
		/*ahora head obtiene la direccion de memoria del siguiente...*/
		/*...nodo al que apuntaba previamente*/
		head = head->next;
		/*free al str del nodo*/
		free(aux->str);
		/*free al nodo*/
		free(aux);
	}
}


