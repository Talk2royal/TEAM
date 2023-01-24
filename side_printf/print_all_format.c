#include "main.h"

/**
 * _printf -  a function that produces output according to a format
 * @format:address of format
 *
 * Return: lenght of the printed format
 */

int _printf(const char *format, ...)
{

	int len = strlen(format);

	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	print_all_format(format, arg);
	va_end(arg);
	return (len);
}

/**
 * print_all_format - print string of characters and format specifier
 * @string: string to be printed
 * @identifier: format specifier value
 *
 * Return: total lenght of characters printed
 */

int print_all_format(const char *string, va_list identifier)
{
	int lenght, j, i, identifier_index;

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
				{'s', print_string},
			};
			identifier_index = i + 1;
			j = 0;
			while (j < 2)
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
	return (i);
}
