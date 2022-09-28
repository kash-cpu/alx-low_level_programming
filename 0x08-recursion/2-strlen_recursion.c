#include "main.h"

int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = _strlen_recursion(*s);
		return(i);
	}
}
