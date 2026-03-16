#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m,n||m){
        int d[1000],sum=0;
        for(int i=0;i<n;i++)cin>>d[i];
        sort(d,d+n,greater<int>());
        for(int i=0;i<n;i++){
            if((i+1)%m!=0)sum+=d[i];
        }
        cout<<sum<<endl;

    }
}