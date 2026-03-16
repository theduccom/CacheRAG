#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m,n,m){
        int vege[1000];
        for(int i=0;i<n;i++)cin>>vege[i];
        sort(vege,vege+n);
        for(int i=1;n-m*i>=0;i++)vege[n-m*i]=0;
        for(int i=1;i<n;i++)vege[0]+=vege[i];
        cout<<vege[0]<<endl;
    }
}