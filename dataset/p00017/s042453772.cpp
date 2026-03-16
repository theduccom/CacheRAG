#include <stdio.h>
#include <string.h>

char buf[99];

int main(){
    int i;

    for(;~scanf("%[^\n] ",buf);){
        for(i=0;;i++){
            if( buf[i]-buf[i+1]==12 || buf[i]-buf[i+1]==-14 ){
                break;
            }
        }
        int sa = buf[i] - 't';
        for(i=0; buf[i]!='\0'; i++){
            if( 'a' <= buf[i] && buf[i]<='z' ){
                int tmp = buf[i] - sa;
                putchar( tmp + (tmp<'a' ? 26 : tmp>'z' ? -26 : 0) );
            }
            else{
                putchar(buf[i]);
            }
        }
        puts("");
    }
    return 0;
}