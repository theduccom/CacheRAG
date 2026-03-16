#include<stdio.h>
int main(){
int a,b,c;scanf("%d%d%d",&a,&b,&c);printf("%s\n",(c|(a&b))?"Open":"Close");
}