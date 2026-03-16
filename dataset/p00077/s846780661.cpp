#include <stdio.h>

int main(void){
    char buf[100+1];
    int len;
    
    while (gets(buf)){
        for (int i=0; buf[i]!='\0'; i++){
            if (buf[i] != '@'){
                printf("%c", buf[i]);
            } else {
                len = buf[++i] - '0';
                i++;
                for (int j=0; j<len; j++){
                    printf("%c", buf[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}