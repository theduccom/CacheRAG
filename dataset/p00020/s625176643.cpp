#include<cstdio>
int main(){
    char c;
    while(scanf("%c",&c)!=-1){
        if('a'<=c && c<='z'){
            printf("%c",c+('A'-'a'));
        }else printf("%c",c);
    }
}