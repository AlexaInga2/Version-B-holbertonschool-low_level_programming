#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 * @char:
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	
}

/**
 * print_c - prints characters
 * @c: characters to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c",va_arg(c, int));
}


/**
 * print_s - prints strings
 * @s: string to print
 *
 * Return: void, or (nil) if string is NULL
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char*);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s",va_arg(s, char*));
}


/**
 * print_i - print integers
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%i",va_arg(i, int));
}



/**
 * print_f: print floats
 * @f: the float to print
 *
 *Return: void
 */
void print_f(va_list f)
{
	printf("%f",va_arg(f, float));
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
  int i, j;

  print_all[] = {
    ("c", print_c),
    ("s", print_s),
    ("i", print_i),
    ("f", print_f),
    (NULL, NULL)
  };
  va_list list;
  char *separator = "";

  va_start(list, format);
  i = 0;
  while (format && format[i])
    {
      j = 0;
      while (all[j].t != NULL) // calling 'TYPE' (.t) from list
	{
	  if (*(all[j] == format[i])
	    {
	      printf("%s", separator);
	      p[j].f(list) // calling 'FUNCTION' (.f) from list
	    }


	      }


    }
