#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * nop - A function that litterally doesn't do anything
 * @stack: pointer to the top of the stack
 * @line_number: line number where nothing happens
 * Return: void
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
