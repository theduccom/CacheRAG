#include<iostream>
using namespace std;
int main(){
    bool a[50002]={0};
    
    for(int i=2;i<25002;i++)
        for(int j=i;j*i<50002;j++)
            a[i*j]=true;
    int n;
    while(cin>>n,n){
        int co=0;
        for(int i=2;i<=n/2;i++){
            if((!a[i])&&(!a[n-i]))co++;
        }
        cout<<co<<endl;
    }
}