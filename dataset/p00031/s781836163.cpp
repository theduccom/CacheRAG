#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        for(int i=0;i<15;i++){
            if(x&1){
                cout<<pow(2,i);
                x=x>>1;
                if(x)cout<<' ';
            }
            else x=x>>1;
        }
        cout<<endl;
    }
    return 0;
}