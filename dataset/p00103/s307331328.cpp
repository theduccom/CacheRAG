#include <stdio.h>
int main(){
    int h,o,p,t;
    char a[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        h=o=p=0;
        while(o<3){
            scanf("%s",a);
            if(a[1]=='I'){
                if(h>2)p++;
                else h++;
            }
            if(a[1]=='O'){
                p=p+h+1;
                h=0;
            }
            if(a[1]=='U'){
                o++;
            }
        }
        printf("%d\n",p);
    }
}