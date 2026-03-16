#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n),n){
        int a,b,c;
        int ans = 0;
        int x = 0;//比較用
        for(int i = 0;i < n; i++){
            scanf("%d%d%d",&a,&b,&c);
            if(x < b+c){
                x = b+c;
                ans = a;
            }
        }
        printf("%d %d\n",ans,x);
    }
    return 0;
}