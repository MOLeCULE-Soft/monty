#include "monty.h"

/**
* pint - prints value atop the stack
* @stack: stack top
* @line_number: script line under execution
*/
void pint(stack_t **stack, unsigned int line_number)
{
	char *opcode;

	UNUSED(line_number);
	opcode = strtok(bundle.line_text, DELIM);
	if (stack && *stack)
	{
		printf("%d\n", (*stack)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't %s, stack empty\n", line_number, opcode);
		bundle.status = EXIT_FAILURE;
		shutdown();
	}
}