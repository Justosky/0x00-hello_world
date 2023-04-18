#include <stdio.h>
#include "dog.h"
#include "main.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n",d->owner);

	}
}
