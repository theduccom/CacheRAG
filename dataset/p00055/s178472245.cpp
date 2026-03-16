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

int main(){
    double f;
    while(cin>>f){
        double data[10];
        data[0]=f;
        for(int i=1;i<10;i++){
            if((i+1)%2==0)data[i]=data[i-1]*2;
            else data[i]=data[i-1]/3;
        }
        double ans=0;
        rep(i,10)ans+=data[i];
        printf("%12.10lf\n",ans);
    }
    return 0;
}