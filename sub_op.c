#include "monty.h"

/**
* sub_op - subtracts the top element of the stack from the second
* top element of the stack
* @stack: Pointer begin of the stack
* @line_number: Line number of the opcode file you are executing
*/
void sub_op(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n -= n;
}
