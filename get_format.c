#include "main.h"
/**
 *
 */
int (*get_format(const char *s))(va_list)
{
	int i = 0;
	format_t form[] = {
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_str},
		{'\0', NULL}
	};

	for (; form[i].c; i++)
	{
		if (*s == form[i].c)
		{
			return (form[i].f);
		}
	}
	return (0);
}
