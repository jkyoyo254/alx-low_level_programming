#include "main.h"
#include <string.h>

/**
 * _strlen - function to get the length of a strng
 * @s: string pointer to pass to this function
 * Return: returns the length of the screen
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
