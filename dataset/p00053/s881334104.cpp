#include<bits/stdc++.h>
using namespace std;

const int SIZE=200000;
bool f[SIZE];
int main(){
    vector<int>p;
    f[0]=f[1]=true;
    for(int i=2;i<SIZE;i++){
        if(f[i])continue;
        p.push_back(i);
        for(int j=i+i;j<SIZE;j+=i)f[j]=true;
    }

    for(int i=1;i<p.size();i++)p[i]+=p[i-1];
    
    int n;
    while(cin>>n,n)cout<<p[--n]<<endl;

    return 0;
}