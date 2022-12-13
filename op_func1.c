#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of line
 *
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		free(new);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	new->prev = *stack;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;

}

/**
 * push - pushes an element to the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of line
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;


}
