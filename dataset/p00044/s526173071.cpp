#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n[60001];
    memset(n,0,sizeof(n));
    for(int i=2;i<30001;i++)
        for(int j=i;i*j<60001;j++)
            n[j*i]=1;
    int f,i;
    while(cin>>f){
        for(i=f-1;n[i];i--);cout<<i<<" ";
        for(i=f+1;n[i];i++);cout<<i<<endl;
    }
}