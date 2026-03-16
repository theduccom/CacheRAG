#include<bits/stdc++.h>
using namespace std;

bool is_yeap(int y){
    return y%400==0||(y%4==0&&y%100);
}
int main(){
    int a,b;
    bool flag=false;

    while(scanf("%d%d",&a,&b),a||b){
        if(flag)puts("");
        else flag=true;
        bool latte=false;
        for(int i=a;i<=b;i++){
            if(is_yeap(i)){
                printf("%d\n",i);
                latte=true;
            }
        }

        if(!latte)puts("NA");
    }

    return 0;
}