#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

#include<vector>

#define INF 999999
using namespace std;
bool prime[55000]={0};
int main(){
    prime[1]=1;
    for(int i=2;i*i<55000;i++){
        if(prime[i]==0){
            for(int j=i;j<=55000;j+=i){
                if(prime[j]==0){
                    prime[j]=1;
                }
            }
            prime[i]=0;
        }
    }
    int N;
    while(~scanf("%d",&N)){
        for(int i=N-1;;i--){
            if(prime[i]==0){cout<<i<<" ";break;}
        }
        for(int i=N+1;;i++){
            if(prime[i]==0){cout<<i<<endl;break;}
        }
    }
    return 0;
}