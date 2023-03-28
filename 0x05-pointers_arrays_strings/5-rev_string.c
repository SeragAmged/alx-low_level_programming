#include "main.h"
#include <stdio.h>


/**
* rev_string ->  reverses a string.
* @s: the string to be reversed.
* Return: 0 if success.
*/

void rev_string(char *s)
{
int i, len, j;
char temp;

len = 0;
while (s[len] != '\0')
len++;

j = len - 1;
for (i = 0; i < len; i++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j--;
}
}
