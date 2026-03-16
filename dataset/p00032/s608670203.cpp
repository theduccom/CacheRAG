#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    int n,m,d,r=0,l=0;
    char c;
    while(cin>>n>>c>>m>>c>>d){
        if(n==m)
            l++;
        if(n*n+m*m==d*d)
            r++;
    }
    cout<<r<<endl<<l<<endl;
    return 0;
}