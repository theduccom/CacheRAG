#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <queue>

using namespace std;
int main(){
    int prime[50001]={0};
    prime[0]=-1;
    prime[1]=-1;
    int now =2;
    while(now<=50000){
        if(prime[now]==-1){
            now++;
        }else{
            prime[now]=1;
            int del = now;
            while(1){
                del+=now;
                if(del>50000)break;
                prime[del]=-1;
            }
            now++;
        }
        
    }
    int x;
    while(cin>>x){
        if(x==0)break;
        int count=0;
        for(int i=2; i<=x/2; i++){
            if(prime[i]==1&&prime[x-i]==1)count++;
        }
        cout<<count<<endl;
    }

}