#include<stdio.h>
 
int main(){
    int a=0,b=0,o=0,ab=0;
    int now;
    char var[100];
    while(~scanf("%d,%s",&now,var)){
        if(var[1]=='B')ab++;
        else if(var[0]=='A')a++;
        else if(var[0]=='B')b++;
        else if(var[0]=='O')o++;
    }
    printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
}
