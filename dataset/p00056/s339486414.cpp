#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  prime[50001];
    for(int i=2;i<50001;i++)prime[i]=0;
    for(int i=2;i<=sqrt(50001);i++){
        if(prime[i]==0){
            for(int j=i+i;j<50001;j+=i)prime[j]=1;
        }
    }
    int n,cou=0;
    while(cin>>n&&n!=0){
        for(int i=2;i<=n/2;i++)if(prime[i]==0&&prime[n-i]==0)cou++;
        cout<<cou<<endl;
        cou=0;

    }
}