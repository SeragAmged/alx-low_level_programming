#include "main.h"

/**
* print_rev -> printing a string in reverse.
* @s: the string to be printed in rev.
* Return: 0 if success.
*/

void print_rev(char *s)
{
int i, c;
c = 0;

while (s[c] != '\0')
c++;

for (i = c - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
