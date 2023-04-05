#include "lists.h"
/**
 * *add_node_end - that adds a new node at the end of a list_t list
 * @head: variable
 * @str: variable
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*creo un nuevo nodo, y un aux para guardar dir del nodo prev al null*/
	list_t *newNode, *aux;

	/*si string es null no tiene sentido pedir memoria para almacenar algo null*/
	if (str == NULL)
		return (NULL);
	/*pido memoria para el newNode para tener con que apuntar si son nulos o no*/
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	/*para agregarlo en ultima posición next->null*/
	newNode->next = NULL;

	/*si la lista es vacía el head apunta a NULL*/
	if (*head == NULL)
		/*la lista esta vacía y hacemos que head apunte al newNode*/
		*head = newNode;
	else
	{
		/* guardo en aux lo que apunta head*/
		aux = *head;
		/*recorro los nodos...*/
		while (aux->next != NULL)
			/*...hasta encontrar el que apunta a null*/
			aux = aux->next;
		/*cuando lo encuentro hago que apunto al nuevo nodo generado*/
		aux->next = newNode;
	}
	return (newNode);
}
