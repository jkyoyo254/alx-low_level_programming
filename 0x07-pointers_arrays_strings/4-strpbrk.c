#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates a string for any set of bytes
 * @s: 1st string
 * @accept: 2nd string
 * Return: a pointer to the byte in s that matches one in byte
 * or null if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
