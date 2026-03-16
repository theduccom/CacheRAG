#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        bool flag=false;
        for(int i=0;i<10;i++){
            if((n>>i)&1){
                if(flag)printf(" ");
                else flag=true;

                printf("%d",1<<i);
            }
        }
        puts("");
    }
    return 0;
}