#include "monty.h"

/**
* free_ptrline - Frees line
* @status: Exit status
* @arg: Pointer to line
*/
void free_ptrline(int status, void *arg)
{
	char **ptrline = arg;

	(void)status;
	if (*ptrline != NULL)
		free(*ptrline);
}

/**
* free_stack - Frees stack
* @status: Exit status
* @arg: Pointer to top the stack
* Return: void
*/
void free_stack(int status, void *arg)
{
	stack_t **stack;
	stack_t *next;

	(void)status;
	stack = (stack_t **)arg;
	while (*stack != NULL)
	{
		next = (*stack)->next;
		free(*stack);
		*stack = next;
	}
}
