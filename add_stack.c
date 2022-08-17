#include "monty.h"

/**
* add_stack -  new node to stack
* @head: Pointer to  first node of stack
* @number: Element  add
* Return: void.
*/
void add_stack(stack_t **head, const int number)
{
	stack_t *n_node;

	n_node = malloc(sizeof(stack_t));

	if (n_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	n_node->next = NULL;
	n_node->n = number;
	n_node->prev = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return;
	}
	n_node->next = *head;
	*head = n_node;
	n_node->next->prev = n_node;
}
