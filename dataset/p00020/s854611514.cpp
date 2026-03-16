#include <stdio.h>

int main(void)
{
    char c;

    while(~(c = getchar()))
        putchar('a' <= c && c <= 'z' ? c-'a' + 'A' :c);

    return (0);
}