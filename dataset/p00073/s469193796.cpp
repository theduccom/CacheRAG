#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <typeinfo>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

double is(double x,double h){
    return x*x + 2*x * sqrt( h*h + (0.25)*x*x );
}


int main(){
    int x,h;
    while(1){
        cin>>x>>h;
        if(x==h && x==0)break;
        
        printf("%15.10lf\n",is(x,h));
    }
    return 0;
}