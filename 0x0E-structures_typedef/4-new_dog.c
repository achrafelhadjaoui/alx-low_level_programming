#include "dog.h"

int _len(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that creats a new dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 *
 * Return: dog_t, or NULL if the function faill
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cpy_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	cpy_dog = malloc(sizeof(dog_t));
	if (cpy_dog == NULL)
		return (NULL);


	cpy_dog->name = malloc(sizeof(char) * (_len(name) + 1));
	if (cpy_dog->name == NULL)
	{
		free(cpy_dog);
		return (NULL);
	}

	cpy_dog->owner = malloc(sizeof(char) * (_len(owner) + 1));
	if (cpy_dog->owner == NULL)
	{
		free(cpy_dog->name);
		free(cpy_dog);
		return (NULL);
	}

	cpy_dog->name = _strcpy(cpy_dog->name, name);
	cpy_dog->age = age;
	cpy_dog->owner = _strcpy(cpy_dog->owner, owner);

	return (cpy_dog);
}

/**
 * _len - count the length of a string
 * @str: the string
 *
 * Return: an int
 */

int _len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - a function that copies a string from source into dist
 * @src: the source string
 * @dest: the dest string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
