#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b,c;
    int num[2]={};
    while(scanf("%d,%d,%d", &a, &b, &c)!=EOF){
        if(a+b<=c) continue;
        if(a*a +b*b == c*c) num[0]++;
        if(a==b) num[1]++;
    }
    cout << num[0] << endl << num[1] << endl;
    return 0;
}