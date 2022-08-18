#include "monty.h"

/**
 * pint - A function that prints the value at the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: number of the line where the error is found
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

