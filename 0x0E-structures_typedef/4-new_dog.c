#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - prints the length of string
 * @s: string to check
 * Return: On success result
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != 0)
	{
		num++;
		s++;
	}
	return (num);
}

/**
 * _strcpy - copies a string from src to dest
 * @src: string source
 * @dest: string destination
 * Return: On success result
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}

/**
 * new_dog - prints a struct dog
 * @name: String to check
 * @age: Number to check
 * @owner: String to check
 *
 * Return: On success result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(_strlen(name) + 1);
	newdog->owner = malloc(_strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);

	newdog->age = age;

	return (newdog);
}
