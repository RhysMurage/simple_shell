#include "main.h"

/**
  **/

int main(void)
{
	int status = 1;

	while (status)
	{
		status = isatty(STDIN_FILENO);

		if (status == 1)
			write(STDOUT_FILENO, "|\n", 2);
		status = 0;
	}
	return (0);
}
