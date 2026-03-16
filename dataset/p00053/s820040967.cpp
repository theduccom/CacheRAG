#include<iostream>
using namespace std;
int main(){
    bool prime[110000];
    for(int i=0;i<110000;i++)prime[i]=true;
    prime[0]=prime[1]=false;
    for(int i=0;i<1005;i++){
        if(prime[i]){
            for(int j=i*2;j<110000;j+=i)prime[j]=false;
        }
    }
    int a[10000],point=0;
    for(int i=2;i<110000;i++){
        if(prime[i]){
            a[point++]=i;
        }
        if(point>=10000)break;
    }
    int n;
    while(cin>>n,n){
        int sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}