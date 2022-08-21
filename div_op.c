#include "monty.h"

/**
* div_op - divides second top element the stack the top
* element the stack
* @stack: Pointer begin of the stack
* @line_number: Line number of the opcode file you are executing
*/
void div_op(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n /= n;
}
