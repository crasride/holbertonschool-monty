#include "monty.h"

/**
* pchar_op - prints the char at the top of the stack, followed by a new line
* The integer stored at the top of the stack is treated as the ascii value of
* the character to be printed.
* @stack: Pointer to the begin of the stack
* @line_number: Line number of the opcode file you are executing
*/
void pchar_op(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
