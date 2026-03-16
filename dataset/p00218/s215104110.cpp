#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        if(!N)break;
        for(int i=0;i<N;i++){
            int su,ei,koku;
            cin>>su>>ei>>koku;
            if(su==100||ei==100||koku==100||180<=su+ei||240<=su+ei+koku)puts("A");
            else if(210<=su+ei+koku||(150<=su+ei+koku&&(80<=su||80<=ei)))puts("B");
            else puts("C");
        }
    }
    return 0;
}