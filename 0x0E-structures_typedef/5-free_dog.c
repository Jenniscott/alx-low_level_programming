#include <stdlib.h>
	#include "dog.h"


	/**
	 * main - fress memory
	 *
	 * free_dog: frees memory allocated for a struct dog
	 * @d: struct dog to free
	 * Desc: Longer description
	 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
