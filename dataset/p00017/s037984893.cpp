#include <cstdio>
#include <cstring>
#include <cctype>

int main(void) {
    char str[81];
    while(gets(str)) {
        while(!strstr(str, "this") && !strstr(str, "that") && !strstr(str, "the")) {
            for(int r = 0; r < strlen(str); r++) {
                if(isalpha(str[r])) {
                    str[r] = 'a' + (str[r] - 'a' + 1) % 26;
                }
            }
        }
        printf("%s\n", str);
    }
    return(0);
}