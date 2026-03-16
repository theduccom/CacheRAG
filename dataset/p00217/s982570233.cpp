#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        pair<int,int>ma=pair<int,int>(0,0);
        while(n--){
            int p,a,b;
            cin>>p>>a>>b;
            ma=max(ma,pair<int,int>(a+b,p));
        }
        cout<<ma.second<<" "<<ma.first<<endl;
    }

    return 0;
}