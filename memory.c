#include "shell.h"

/**
 * bfree - Frees to a pointer and NULLs address
 * @ptr: address of pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
