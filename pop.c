#include "monty.h"

/*
* pop - A function that removes the top element of the stack
* @stack: pointer to the top of the stack
* @line_number: number of the line where the error is found
* Return: void
*/

void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp = (*stack);

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = temp->next;
	if (temp->next != NULL)
		temp->next->prev = NULL;
	free(temp);
}
