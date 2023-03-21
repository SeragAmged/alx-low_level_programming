#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char _putchar(char c);
void print_alphabet(void){
int i;
for(i=97;i<=122;i++)
{
_putchar((char)i);
}
_putchar('\n');
}
#endif
