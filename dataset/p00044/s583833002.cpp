#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int lis[100000];
int main(){
    for(int i=2;i<100000;i++)lis[i]=1;
    for(int i=2;i<330;i++){
        if(lis[i]){
            for(int j=2;;j++){
                if(100000<=i*j)break;
                lis[i*j]=0;
            }
        }
    }
    int a;
    while(cin>>a){
        for(int i=-1;;i--){
            if(lis[a+i]){
                cout<<a+i;
                break;
            }
        }
        cout<<" ";
        for(int i=1;;i++){
            if(lis[a+i]){
                cout<<a+i;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}