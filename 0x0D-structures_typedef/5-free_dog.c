#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog  -  a function that frees dog.
 *@d: pointer to the structure.
 *
 *Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
