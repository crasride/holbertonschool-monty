#include "monty.h"

/**
* main - Monty bytecode
* @argc: Arguments counter
* @argv: Arguments vector
* Return: EXIT_SUCCESS or EXIT_FAILURE
*/
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	FILE *fs = NULL;
	unsigned int line_number = 1;
	char *ptrline = NULL, *op_code = NULL;
	size_t n = 0;

	if (argc != 2) /* Check the program */
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fs = fopen(argv[1], "r"); /* Open file */
	if (!fs) /* check the file was opened */
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/*release variables*/

	on_exit(free_ptrline, &ptrline);
	on_exit(free_stack, &stack);
	on_exit(file_close, fs);

	/* read line by line */
	while (getline(&ptrline, &n, fs) != -1)
	{
		line_number++;
		op_code = strtok(ptrline, "\n\t\r ");
		if (op_code != NULL && op_code[0] != '#')
		{
			get_func(op_code, &stack, line_number);
		}
	/*	line_number++; */
	}
	exit(EXIT_SUCCESS);
}
