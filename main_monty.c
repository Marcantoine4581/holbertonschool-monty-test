#include "monty.h"

/**
 * main - 
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * If the user does not give any file or more than one argument,
 * print the error message USAGE: monty file, exit status EXIT_FAILURE.
 * 
 * 
 * 
 */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file <file>", argv[1]);
		exit(EXIT_FAILURE);
	}

}
