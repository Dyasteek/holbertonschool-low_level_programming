#include "variadic_functions.h"

void
print_int(char *str, va_list list)
{
	printf("%s%d", str, va_arg(list, int));
}

void
print_char(char *str, va_list list)
{
	printf("%s%c", str, va_arg(list, int));
}

void
print_float(char *str, va_list list)
{
	printf("%s%f", str, va_arg(list, double));
}

void
print_str(char *str, va_list list)
{
	char *temp;
	temp = va_arg(list, char *);
	if (temp == NULL)
	{
		temp = "(nil)";
	}
	printf("%s%s", str, temp);
}

void
print_all(const char * const format, ...)
{
	va_list list;
	char *str;
	int a = 0, b;

	func_list prt[] = {
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL},
	};
	va_start(list, format);
	str = "";
	while (format && format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == prt[b].ch[0])
			{
				prt[b].f(str, list);
				str = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
