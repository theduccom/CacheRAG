#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std;
const int Max=10000000;
bool prime[Max];
int main(void){
    int in,i;
    for(int i=0;i<Max;i++)prime[i]=true;
    prime[1]=false;
    for(int i=2;i<Max;i++){
        if(prime[i]){
            for(int s=i*2;s<=Max;s+=i)prime[s]=false;
        }
    }
    while(1){
        cin>>in;
        if(in==0)break;
        for(i=in;i>0;i--){
            if(prime[i]==true&&prime[i-2]==true){
                cout<<i-2<<" "<<i<<"\n";
                break;
            }
        }
        
    }
    return 0;
}