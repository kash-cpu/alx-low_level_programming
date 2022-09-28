#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s)
	{
		int i = _strlen_recursion(*s);
		return(i);
	}
}
