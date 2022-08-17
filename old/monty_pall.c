#include "monty.h"

/**
* _pall - Print all elements of the stack
* @stack: Pointer to the first node of the stack
* @line_number: Current line being executed
*/
void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)(line_number);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
		{
			return;
		}
	}
}
