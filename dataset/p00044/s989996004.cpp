#include<iostream>
using namespace std;
int main(){
    bool prime[1000000];
    for(int i=0;i<1000000;i++)prime[i]=true;
    prime[0]=prime[1]=false;
    for(int i=0;i<1005;i++){
        if(prime[i]){
            for(int j=i*2;j<1000000;j+=i)prime[j]=false;
        }
    }
    int n;
    while(cin>>n){
        for(int i=n-1;i>0;i--){
            if(prime[i]){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=n+1;i<100000;i++){
            if(prime[i]){
                cout<<i<<endl;;
                break;
            }
        }
    }

    return 0;
}