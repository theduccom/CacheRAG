#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    while(1){
        int a;
        cin>>a;
        if(a==-1)break;
        int ans=3130;
        ans-=125*min(10,max(0,a-10));
        ans-=140*min(10,max(0,a-20));
        ans-=160*max(0,a-30);
        cout<<ans<<endl;
    }
    return 0;
}