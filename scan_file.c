#include "monty.h"

void scan_file(void)
{
	FILE *file;
	size_t n = 0;
	char *buffer, *op;
	int line_nb;
	char *delimiter = " \n\t\r"

	while (getline(&buffer, &n, file) != -1)
	{
		line_nb++;
		op = strtok(buffer, delimiter)
		get_op_func(op, &stack, line_nb)
	}
	exit(EXIT_SUCCESS);

}
