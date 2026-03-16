#include<cstdio>
#include<cstring>
int main(){
    char num[5];
    int n;
    int a=0,b=0,ab=0,o=0;
    while(scanf("%d,%s\n",&n,num)!=-1){
        if(strcmp(num,"A")==0)a++;
        else if(strcmp(num,"B")==0)b++;
        else if(strcmp(num,"AB")==0)ab++;
        else o++;
    }
    printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
}