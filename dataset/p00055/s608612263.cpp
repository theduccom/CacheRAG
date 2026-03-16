#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a[2];
    while(cin>>a[0]){
        int co=1;
        double ans=0;
        while(co<11){
            if(co%2)a[co%2]=a[(co%2+1)%2]*2;
            else a[co%2]=a[(co%2+1)%2]/3;
            ans+=a[(++co)%2];
        }
        printf("%.7f\n",ans);
    }
}