#include "monty.h"

/**
* file_close - Close file
* @status: Exit status
* @arg: Pointer to file
*/
void file_close(int status, void *arg)
{
	FILE *fs;

	(void)status;
	fs = (FILE *) arg;
	fclose(fs);
}
