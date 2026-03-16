#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,m,roop=0,ans[100];
    while(cin>>n>>m&&n!=0&&m!=0){
        int p[n],sum=0,h=n/m;
        for(int i=0;i<n;i++){
            cin>>p[i];
            sum+=p[i];
        }
        sort(p,p+n);
        for(int i=1;i<=h;i++){
            sum-=p[n-m*i];
        }
        ans[roop]=sum;
        roop++;
    }
    for(int i=0;i<roop;i++){
        cout<<ans[i]<<endl;
    }
}