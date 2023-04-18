#include <stdio.h>
#include "dog.h"
/**
*print_dog - Prints dog name, age and owner.
*@d: A pointer.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}

		printf("%.6f\n", d->age);
		printf("%s\n", d->owner);
	}
}
