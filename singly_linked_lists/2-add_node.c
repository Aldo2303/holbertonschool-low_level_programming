#include "lists.h"
/**
 * *add_node - that adds a new node at the beginning of a list_t list
 * @head: variable
 * @str: variable
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	/*creo un nuevo nodo, del data type list_t*/
	list_t *newNode;

	/*si string es null no tiene sentido pedir memoria para almacenar algo null*/
	if (str == NULL)
		return (NULL);
	/*pido memoria para el newNode para tener con que apuntar si son nulos o no*/
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	/*newNode que toma el contenido de str y lo duplica*/
	newNode->str = strdup(str);
	/*newNode que mide la longitud de str*/
	newNode->len = strlen(str);

	/*si la lista es vacía el head apunta a NULL*/
	if (*head == NULL)
		/*si es nulo, hago que el newNode apunte al nulo, y es unico nodo*/
		newNode->next = NULL;
	else
		/*que newNode me apunte a lo que apuntaba antes head*/
		newNode->next = *head;

	/*head ahora le va apuntar a newNode*/
	*head = newNode;
	return (newNode);
}
