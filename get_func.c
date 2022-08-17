#include "monty.h"

/**
* get_func - search function in opcode and execute
* @op_code: check and execute
* @stack: Pointer start of stack
* @line_number: line number
* Return: void
*/
void get_func(char *op_code, stack_t **stack, unsigned int line_number)
{
	unsigned int i;
	instruction_t check_functions[] = {
		{"push", monty_push},
		{"pall", monty_pall},
	/*	{"pint", pint},*/
	/*	{"pop", pop},*/
	/*	{"swap", swap},*/
	/*	{"add", add},*/
	/*	{"nop", nop},*/
		{NULL, NULL}
	};

	for (i = 0; check_functions[i].opcode != NULL; i++)
	{
		if (strcmp(check_functions[i].opcode, op_code) == 0)
		{
			check_functions[i].f(stack, line_number);
			return;
		}
	}

	/* If it does not work or is not */
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op_code);
	exit(EXIT_FAILURE);
}
