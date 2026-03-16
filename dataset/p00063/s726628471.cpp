#include <stdio.h>
#define BUFSZ 100

int main(void){
    char buf[BUFSZ+1];
    int cnt=0;
    char *end,*ptr;
    bool regul;
    
    while (scanf("%s", buf) != EOF){
        regul=true;
        for (end=buf; *end!='\0'; end++);
        for (ptr=buf, end--; ptr < end; ptr++,end--){
          if (*ptr != *end) regul=false;
        }
        if (regul) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}