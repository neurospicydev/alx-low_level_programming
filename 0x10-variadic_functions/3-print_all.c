#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: list of format specifiers for each argument
 *
 * Return: void functions have no return value
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s;
	va_list ap;

	while (format == NULL)
		printf("\n");
	va_start(ap, format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[j] == 'i' || format[j] == 'c' || format[j] == 's' ||
					format[j] == 'f') && format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
