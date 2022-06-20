#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locates character
 * @s: string
 * @c: character
 * Return: ap pointer to the 1st occurrence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
