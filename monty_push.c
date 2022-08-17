#include "monty.h"

/**
* monty_push - add an integer to stack
* @stack: a double pointer to the top of the stack
* @line_number: file line number
* Return: void
*/
void monty_push(stack_t **stack, unsigned int line_number)
{
	char *val;
	int number, count, check = 0;

	val = strtok(NULL, "\n\t\r ");

	for (count = 0; val[count]; count++)
	{
		if (val[count] == '-' && count == 0)
			continue;
		if (isdigit(val[count]) == 0)
			check = 1;
	}
	if (val == NULL || check)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(val);
	add_stack(stack, number);
}
