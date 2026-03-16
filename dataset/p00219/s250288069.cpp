#include<iostream>
using namespace std;
int main(){

    int n;
    while(cin>>n,n){
        int L[10]={0};
        while(n--){
            int A;
            cin>>A;
            L[A]++;
        }
        for(int i=0;i<10;i++){
            if(L[i]==0)cout<<"-";
            else for(int j=0;j<L[i];j++)cout<<"*";
            cout<<endl;
        }
    }
}