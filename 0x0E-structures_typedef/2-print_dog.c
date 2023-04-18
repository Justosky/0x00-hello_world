#include <stdio.h>
#include "dog.h"
/**
*print_dog - Prints dog name, age and owner.
*@d: A pointer.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%.6f\n", d->age);
		printf("%s\n", d->owner);

	}
}
