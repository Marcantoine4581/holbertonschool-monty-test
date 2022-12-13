#include "monty.h"

/**
 * _push - pushe an element to the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of line
 *
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *line;
	int i;

	while (i = 0; line[i] != '\0'; i++)
	{
		if (isdigit(line[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer", line_number);
			exit(EXIT_FAILURE);
		}
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free(new);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(line);
	new->next = NULL;
	new->prev = *stack;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;

}

/**
 * _pall - print all the values on the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of line
 *
 * Return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

