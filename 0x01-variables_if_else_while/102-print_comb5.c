#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 100; i++)
{

for (j = 0 ; j < 100; j++)
{
for (k = 0 ; k < 100; k++)
{
putchar(k%10 + '0');
putchar(' ');
}
putchar(i%10 + '0');
putchar(j%10 + '0');
if (j == 99 && i == 99)
continue;
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
