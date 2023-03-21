#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char _putchar(char c);
void print_alphabet(void){
int i;
for(i=97;i<=122;i++)
{
putchar((char)i);
}
putchar('\n');
}
#endif
