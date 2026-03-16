#include <stdio.h>

int main(void){
    int b[3];
    int fr,to,tmp;
    char buf[8];
    
    b[2]=1; b[1]=b[0]=0;
    while (scanf("%s", buf)!=EOF){
        fr = buf[0]=='A'?2:buf[0]=='B'?1:0;
        to = buf[2]=='A'?2:buf[2]=='B'?1:0;
        if (fr==to) continue;
        tmp = b[fr]; b[fr] = b[to]; b[to]=tmp;
    }
    printf("%c\n", b[2]?'A':b[1]?'B':'C');

    return 0;
}