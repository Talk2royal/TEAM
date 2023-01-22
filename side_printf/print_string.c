#include "header.h"

void print_string(va_list character)
{
	char *string = va_arg(character, char *);
	while (*string)
	{
		write(1, &(*string), 1);
		string++;
	}
}	
