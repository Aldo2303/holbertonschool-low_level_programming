#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creates a new dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;

	if (name != NULL)
		ptr->name = _strdup(name);
	else
	{
		ptr->name = NULL;
		free(ptr->name);
	}

	if (owner != NULL)
		ptr->owner = _strdup(owner);
	else
	{
		ptr->owner = (NULL);
		free(ptr->owner);
	}
	return (ptr);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the variable
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		ptr[x] = str[x];
	}
	ptr[x] = '\0';
	return (ptr);
}

