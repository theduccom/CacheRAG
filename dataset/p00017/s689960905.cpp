#include <cstdio>
#include <cstring>
using namespace std;

char next(char c)
{
    if ('a' <= c && c <= 'y') {
        return c+1;
    } else if (c == 'z') {
        return 'a';
    }
    return c;
}

int main()
{
    char str[81];
    while(true) {
        if(!fgets(str,81,stdin)) break;
        for(int j=0;j<26;++j) {
            if (strstr(str, "the") || strstr(str, "this") || strstr(str, "that")) {
                break;
            }
            for(int k=0,len=strlen(str);k<len;++k) {
                str[k] = next(str[k]);
            }
        }
        fputs(str,stdout);
    }
    return 0;
}