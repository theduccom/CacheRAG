#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int ma=0,id;
        while(n--){
            int p,a,b;
            cin>>p>>a>>b;
            if(a+b>ma){
                ma=a+b;
                id=p;
            }
        }
        cout<<id<<" "<<ma<<endl;
    }
    return 0;
}