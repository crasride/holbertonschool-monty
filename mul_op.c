#include "monty.h"

/**
* mul_op - multiplies the second top element of the stack
* with the top element of the stack
* @stack: Pointer to top the stack
* @line_number: Line number of the opcode file you are executing
*/
void mul_op(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n *= n;
}
