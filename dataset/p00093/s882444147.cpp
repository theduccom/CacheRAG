#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int A=-1,B=-1;
    bool f = false;
    while(cin>>A>>B, A||B){
        if(f) puts("");
        bool no = true;
        for(int i=A;i<=B;i++){
            if(i%4==0 && (i%100!=0 || i%400==0)) printf("%d\n",i), no = false;
        }
        if(no) puts("NA");
        f = true;
    }
    return 0;
}