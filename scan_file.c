#include "monty.h"

void scan_file(FILE *file)
{
	size_t n = 0;
	char *buffer = NULL, *op = NULL;
	unsigned int line_number = 0;
	char *delimiter = " \n\t\r";
	stack_t *stack = NULL;

	while (getline(&buffer, &n, file) != -1)
	{
		line_number++;
		op = strtok(buffer, delimiter);
		get_op_func(op, &stack, line_number);
	}
	exit(EXIT_SUCCESS);

}
