#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n,n){
        int cnt[10]={0};
        while(n--){
            int a;
            cin>>a;
            cnt[a]++;
        }

        for(int i=0;i<10;i++){
            if(!cnt[i])cout<<"-"<<endl;
            else{
                for(int j=0;j<cnt[i];j++)cout<<"*";
                cout<<endl;
            }
        }
    }

    return 0;
}