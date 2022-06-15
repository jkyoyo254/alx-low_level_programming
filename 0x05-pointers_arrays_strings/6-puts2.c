#include "main.h"
#include <string.h>

/**
 * puts2 - prints every char of a string starting 1st and followed by newline
 * @str: str parameter
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i];
	_putchar('\n');
}
