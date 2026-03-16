#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        if(!N)break;
        int cou[10]={0};
        for(int i=0;i<N;i++){
            int a;
            cin>>a;
            cou[a]++;
        }
        for(int i=0;i<10;i++){
            if(cou[i]==0)cout<<"-"<<endl;
            else{
                for(int j=0;j<cou[i];j++)cout<<"*";
                puts("");
            }
        }
    }
}