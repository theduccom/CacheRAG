
#include<stdio.h>
#include<ctype.h>
 
int main(void){
 
    char s;
 
    while(1){
 
        scanf("%c",&s);
 
        if( s != '.' && s!= ' ' && (s<'a'||s>'z'))
            break;
 
        else if(s>='a'&&s<='z')
            printf("%c",toupper(s));
 
        else
            printf("%c",s);
 
 
    }
 
    puts("");
 
    return 0;
}