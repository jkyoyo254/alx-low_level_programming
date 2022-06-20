#include "main.h"
#include <stdio.h>

/**
 * _memset - function for constant bytes
 * @s: location to fill
 * @b: chaar for location
 * @n: number of bytes
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
