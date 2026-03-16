#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int a[3],temp,n;
    bool f;
    while(1){
        f=true;
        for(int i=0;i<3;i++){
            scanf("%d",&a[i]);
            if(a[i]!=0)f=false;
        }
        sort(a,a+3);
        if(f)return 0;
        scanf("%d",&temp);
        for(int i=0;i<temp;i++){
            scanf("%d",&n);
            if(4*n*n>a[0]*a[0]+a[1]*a[1])printf("OK\n");
            else printf("NA\n");
        }
        
    }
}