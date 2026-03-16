#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム 
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
using namespace std; // std 名前空間を使用する
const int MAX=10000;
bool prime[MAX+1];
void make_prime(){
    for(int i=0;i<=MAX;i++){
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;
    for(int p=2;p<=MAX;p++){
        if(prime[p]){
            for(int n=p+p;n<=MAX;n+=p){
                prime[n]=false;
            }
        }
    }
}
int main(void){
    make_prime();
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0)break;
        for(int i=n;i>=2;i--){
            if(prime[i]&&prime[i-2]){
                printf("%d %d\n",i-2,i);
                break;
            }
        }
    }
}