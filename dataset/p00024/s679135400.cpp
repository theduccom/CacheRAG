#include<bits/stdc++.h>
using namespace std;

double v[100000];
int main(){
    for(int i=1;i<100000;i++)v[i]=sqrt((5*i-5)/4.9)*9.8;

    double r;
    while(cin>>r)cout<<lower_bound(v,v+100000,r)-v<<endl;

    return 0;
}