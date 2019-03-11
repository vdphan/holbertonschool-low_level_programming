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
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == d->age)
			printf("Age: %.6f\n", d->age);
		else
			print("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
