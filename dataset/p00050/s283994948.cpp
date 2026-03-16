#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <algorithm>
#define CHAR_NUM 1001

using namespace std;

int main(void) {
    int i;
    char str[CHAR_NUM] = {'\0'};
    
    fgets(str, sizeof(str), stdin);
    int len = (int)strlen(str);
    
    
    
    for(i = 0; i < len; i++) {
        if(str[i] == 'a') {
            if(str[i + 1] == 'p')
                if(str[i + 2] == 'p')
                    if(str[i + 3] == 'l')
                        if(str[i + 4] == 'e') {
                            str[i]     = 'p';
                            str[i + 1] = 'e';
                            str[i + 2] = 'a';
                            str[i + 3] = 'c';
                            str[i + 4] = 'h';
                        }
        }
        else if(str[i] == 'p')
            if(str[i + 1] == 'e')
                if(str[i + 2] == 'a')
                    if(str[i + 3] == 'c')
                        if(str[i + 4] == 'h') {
                            str[i]     = 'a';
                            str[i + 1] = 'p';
                            str[i + 2] = 'p';
                            str[i + 3] = 'l';
                            str[i + 4] = 'e';
                        }
    }
    
    printf("%s", str);
    
    
    return(0);
}