#include <cctype>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char s[65536];
    fgets(s, 65536, stdin);
    for (int i = 0; i < strlen(s); ++i) {
        if (isalpha(s[i]))
            putchar(toupper(s[i]));
        else
            putchar(s[i]);
    }
    return 0;
}