#include<cstdio>
#include<iostream>
int main(){
    int n,t=0;
    char str[2000];
    while(1){
        scanf("%c",&str[t]);
        if(str[t]=='\n'){
            n=t;
            break;
        }
        t++;
    }
    for(int i=0;i<n;i++){
        if('a'<=str[i]&&str[i]<='z')
            str[i]-=32;
    }
    for(int i=0;i<n;i++)
        printf("%c",str[i]);
    puts("");
    return 0;
}