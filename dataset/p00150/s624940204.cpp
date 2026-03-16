#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int lis[10001];
int main(){
    for(int i=2;i<=10000;i++){
        int flg=1;
        for(int j=2;j<=10000;j++){
            if(i%j==0&&i!=j)flg=0;
        }
        lis[i]=flg;
    }
    while(1){
        int a;
        cin>>a;
        if(a==0)break;
        for(int i=a;;a--){
            if(lis[a]&&lis[a-2]){
                cout<<a-2<<' '<<a<<endl;
                break;
            }
        }
    }
    return 0;
}