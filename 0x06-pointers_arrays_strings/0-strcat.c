#include "main.h"

/**
 * _strcat - concat 2 string.
 * @dest:char.
 * @src:char.
 * Return:char.
 */

char *_strcat(char *dest, char *src)
{
char *res = dest;

while (*dest)
dest++;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (res);
}
