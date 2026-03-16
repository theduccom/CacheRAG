#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int prime[120001],num,cou=0,ans=0;
    for(int i=2;i<=120000;i++)prime[i]=0;
    for(int i=2;i<=(int)sqrt(120000);i++){
        for(int j=2;j*i<=120000;j++)prime[i*j]=1;
    }
    while(cin>>num&&num!=0){
        for(int i=2;cou<num;i++){
            if(prime[i]==0){
                    ans+=i;
                    cou++;
            }
        }
        cout<<ans<<endl;
        ans=0;cou=0;
    }
}