#include <stdio.h>
int main(void)
{
    char c;
    int i;
    long int li;
    long long lli;
    float f;

    printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(i));
    printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(li));
    printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(lli));
    printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
    return 0;
}