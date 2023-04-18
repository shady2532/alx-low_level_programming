#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t dog;

	if(name == NULL || owner == NULL)
		return (NULL);
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl] != '\0'; nl++)
		;
	for (ol = 0; owner[ol] != '\0'; ol++)
		;
	nl++;
	ol++;
	dog->name = malloc(nl * sizeof(char));
	dog->owner = malloc(ol * sizeof(char));
	dog->age = age;
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i =0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
