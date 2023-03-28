#include "main.h"
#include <stdio.h>


/**
* rev_string ->  reverses a string.
* @s: the string to be reversed.
* Return: 0 if success.
*/

void rev_string(char *s)
{
int i, c, j;
char temp;

c = 0;
while (s[c] != '\0')
c++;

for (i = c - 1; i >= 0; i--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
j++;
}
}
