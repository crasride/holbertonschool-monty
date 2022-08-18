#include "monty.h"

/**
 * swap - A function that swaps the 2 top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: number of the line where the error is found
 * Return : void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	/* if stack contains less than 2 nodes, print error */
	if ((*stack)->next == NULL && (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* to swap the 2 top elements */
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
	free(stack);
}
