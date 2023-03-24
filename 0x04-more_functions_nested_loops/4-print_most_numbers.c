#include "main.h"

/**
*print_most_numbers - print numbers 1:9 expect 2&4 .
*Return: void
*/

void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)

{

if (c == '2' || c == '4')
continue;

_putchar(c);

}
_putchar('\n');
}
