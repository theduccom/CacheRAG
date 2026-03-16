#include <stdio.h>

int main(void){
    char buf[1024];

    gets(buf);
    for (char *pt=buf; *pt!='\0'; pt++){
        if ('a'<=*pt && *pt<='z'){
            *pt = *pt-'a'+'A';
        }
        printf("%c", *pt);
    }
    printf("\n");

    return 0;
}