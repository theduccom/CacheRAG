#include<iostream>
using namespace std;
int main(){
    int n,a;
    while(1){
        int c[10]={0};
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;++i){
            cin>>a;
            c[a]++;
        }
        for(int i=0;i<=9;++i){
            if(c[i]==0){
                cout<<"-"<<endl;
            }
            else{
                for(int j=0;j<c[i];++j){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
