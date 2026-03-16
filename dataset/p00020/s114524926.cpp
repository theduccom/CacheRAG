#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int c;
    while ((c = getchar()) != EOF) {
        if('a' <= c && c <= 'z'){
            putchar(c + ('A' - 'a'));
        }else{
            putchar(c);
        }
    }
    return 0;
}