#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: char to check.
 * Return: 0 is success.
 */
int _strlen(char *s)
{
int c = 0;

for (; *s++;)
c++;
return (c);
}
