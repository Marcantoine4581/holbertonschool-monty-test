#include "monty.h"

void get_op_func(char *op, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0
	instruction_t code_list[] = {
		{"push", _push}
		{"pall", _pall}
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	while (code_list[i].opcode)
	{
		if (code_list[i].opcode[0] == (*op))
			code_list[i].f(stack, line_number);
			return;
		i++;
	}

}
