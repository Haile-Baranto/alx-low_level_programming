#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: - the value of the pointer to be changed to
 * @to: - pointer to the value that will be assigned to *s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
