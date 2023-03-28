#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string.
 * @s: the string.
 * Return: 0 if success.
 */
int _puts(char *s)
{
int c = 0;
for (; *s; s++)
{
putchar(*s);
c++;
}
putchar('\n');
return c;
}
