#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - create an array with special charcter.
 * @str: chacter value.
 *
 * Return: .
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	i = i + 1;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	if (s != NULL)
	{
		for (i = 0; str[i] != 0; i++)
			s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
/**
 *new_dog  -  create new dog.
 *@name: character value.
 *@age: float value.
 *@owner: character value.
 *
 *Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *a, *b;
	dog_t *irondog;

	irondog = malloc(sizeof(dog_t));
	if (irondog == NULL)
		return (NULL);
	a = _strdup(name);
	if (a == NULL)
	{
		free(irondog);
		return (NULL);
	}
	b = _strdup(owner);
	if (b == NULL)
	{
		free(a);
		free(irondog);
		return (NULL);
	}
	irondog->name = a;
	irondog->owner = b;
	irondog->age = age;
	return (irondog);
}
