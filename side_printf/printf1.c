#include "header.h"
int print_c(const char *string, va_list identifier);

int _printf(const char *format, ...)
{

	int len = strlen(format);
	va_list arg;
	va_start(arg, format);
	print_all_format(format, arg);
	va_end(arg);
	return (len);
}

int print_all_format(const char *string, va_list identifier)
{
	int lenght, i;

	lenght = strlen(string);
	i = 0;
	  while (i < lenght)
	  {
		  if (string[i] != '%')
		  {
		  	write(1, &string[i], 1);
		  }
		  else
		  {
			  /*select type of identifier*/
			  type_t selector[] = {
				  {'c', print_char},
				  {'s', print_string}
			  };
			  int identifier_index = i + 1, j = 0;
			  while (j < 4)
			  {
			  	if (string[identifier_index] == selector[j].select_type)
			  	{
					selector[j].ptr_type(identifier);
					break;
				}
				j++;
			  }
			  i++;
		  }
		  i++;
	  }
	  return(i);
}

