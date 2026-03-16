#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int wi,ans[10]={0},cou=0;
while(cin>>wi){
        cou=0;
    for(int i=512;i>0;i=i/2){
        if(wi>=i){
            ans[cou]=i;
            wi-=i;
            cou++;
        }
    }
    cout<<ans[cou-1];
    for(int i=cou-2;i>=0;i--){
        cout<<" "<<ans[i];
    }
    cout<<endl;
}
return 0;
}