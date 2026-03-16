#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int a, b, c, rect=0, loz=0;
    
    while(scanf("%d,%d,%d", &a, &b, &c)!=EOF){
        if(a+b>c){
            if(a*a+b*b==c*c){
                rect++;
            }
            if(a==b){
                loz++;
            }
        }
    }
    
    cout<< rect<< endl;
    cout<< loz<< endl;
    
    return 0;
}