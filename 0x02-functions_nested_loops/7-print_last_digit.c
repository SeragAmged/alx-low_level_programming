#include "main.h"
/**
 * print_res_digit - prints the res digit of a number.
 * @n: the input number.
 * Return:res digit of a number.
 */
int print_res_digit(int n)
{
long m = n;
int res;
if (m < 0)
m = -m;
res = m % 10;
_putchar('0' + res);
return (res); 
}
