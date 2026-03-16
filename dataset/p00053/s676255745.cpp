#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#define INF 999999
using namespace std;
bool prime[1000000]={0};
int main(){
    prime[1]=1;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]==0){
            for(int j=i;j<1000000;j+=i){
                prime[j]=1;
            }
            prime[i]=0;
        }
    }
    int N;
    while(cin>>N,N){
            int sum=0;
        for(int i=2;N!=0;i++){
            if(prime[i]==0){sum+=i;N--;}
        }
        cout<<sum<<endl;
    }
}