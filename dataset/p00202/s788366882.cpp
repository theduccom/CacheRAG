#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int prime[1000001];
int pricecheck[2000001];
int main(){
    for(int i=2;i<=1000000;i++)prime[i]=1;
    for(int i=2;i<=1000;i++){
        if(!prime[i])continue;
        for(int j=2;;j++){
            if(1000000<i*j)break;
            prime[i*j]=0;
        }
    }
    while(1){
        int N,X;
        cin>>N>>X;
        if(N==0&&X==0)break;
        int price[30];
        for(int i=0;i<N;i++)cin>>price[i];
        for(int i=0;i<=1000000;i++)pricecheck[i]=0;
        pricecheck[0]=1;
        for(int i=0;i<1000000;i++){
            if(pricecheck[i]){
                for(int j=0;j<N;j++){
                    pricecheck[i+price[j]]=1;
                }
            }
        }
        for(int i=X;;i--){
            if(i==1){
                puts("NA");
                break;
            }
            if(pricecheck[i]&&prime[i]){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}