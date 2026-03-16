#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    for(;;){
        int n;
        cin>>n;
        if(n==0)break;
        int a[10010]={0};
        int b;
        for(int i=0;i<n;i++){
            cin>>b;
            a[b]++;

        }
        for(int i=0;i<10;i++){
            if(a[i]==0)cout<<"-";
            else for(int j=0;j<a[i];j++)cout<<"*";
            cout<<endl;

        }

    }
	return 0;
}