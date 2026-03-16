#include <stdio.h>
int min(int a,int b){
    if(a<b)return a;
    return b;
}
int main(){
    int n,a,b,temp;
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        a=b=0;
        for(int i=2;i<=n;i++){
            temp=i;
            while(temp%2==0){
                temp/=2;
                a++;
            }
            while(temp%5==0){
                temp/=5;
                b++;
            }
        }
        printf("%d\n",min(a,b));
    }
}