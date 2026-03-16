#include <stdio.h>
int main(){
    int a,b;
    bool f,first=true;
    while(1){
        scanf("%d%d",&a,&b);
        f=true;
        if(a==0&&b==0)return 0;
        if(!first)printf("\n");
        first=false;
        for(int i=a;i<=b;i++){
            if(i%4==0){
                if(i%100==0){
                    if(i%400==0){
                        printf("%d\n",i);
                        f=false;
                    }
                }
                else {printf("%d\n",i);
                    f=false;}
            }
        }
        if(f)printf("NA\n");
    }
}