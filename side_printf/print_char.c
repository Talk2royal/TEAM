#include "header.h"

void print_char(va_list character)
{
	int cha = va_arg(character, int);
	char p = (char)cha;
	write(1, &p, 1);
}	
