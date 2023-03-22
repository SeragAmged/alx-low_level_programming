#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the input number.
 * Return:last digit of a number.
 */
int print_last_digit(int n)
{
int res;
if (n < 0)
n =  -1 * n;
res = n % 10;
_putchar(res + '0');
return (res);
}
