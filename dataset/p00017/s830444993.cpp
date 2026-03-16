#include <stdio.h>
#include <string.h>

int main(void){
    char buf[128];
    bool found;
    
    while (gets(buf) != NULL){
        for(int i=0; i<26; i++){
            found = false;
            if (strstr(buf, "th")){
                found = (strstr(buf,"the") != NULL);
                found |= (strstr(buf,"this") != NULL);
                found |= (strstr(buf,"that") != NULL);
            }
            if (found) break;
            for (char *p = buf; *p != '\0'; p++){
                if (*p >= 'a' && *p <= 'z'){
                        *p = (*p - 'a' + 1) % 26 + 'a';
                }
            }
        }
        printf("%s\n",buf);
    }
    
    return 0;
}