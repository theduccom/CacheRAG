#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#define PI 3.1415926535897932384626433
using namespace std;
int main(){
    double a;
    while(cin>>a){
        a=a*a/19.6;
        cout<<(int)a/5+2<<endl;
    }
    return 0;
}