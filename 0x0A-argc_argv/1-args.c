#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: number of commad line in arguments
 * @argv:arry that contains the program commad line arguments
 * Return: 0 - sucess
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
