#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string.
 * @str: char to check.
 * Return: 0 is success.
 */
void puts2(char *str)
{
int i, len;

len = 0;
while (str[len] != '\0')
len++;

for(i = 0; i < len ; i++)
{
if(i % 2 == 0)
putchar(str[i]);
}
putchar('\n');

}
