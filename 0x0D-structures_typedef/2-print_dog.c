#include "dog.h"
#include <stdio.h>
/**
 *print_dog  -  prints a struct dog.
 *@d: pointer to the structure.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((d->name == NULL) || (d->owner == NULL))
			printf("Name: (nil)");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %.1f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
