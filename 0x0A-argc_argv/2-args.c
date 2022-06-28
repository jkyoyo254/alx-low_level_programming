#include <stdio.h>

/**
 * main - prints all arguments recieved
 * @argc: number of command line arguments
 * @argv: arrays contains command line arguments
 * Return: 0 - sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}