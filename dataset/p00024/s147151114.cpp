#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

double solve(double n){
    return 9.8*sqrt((5*n-5)/4.9);
}

int main(){
    while(true){
        double n;
        if(!(cin>>n))break;
        for(int i=1;i<INF;i++){
//        cout<<solve(i)<<endl;
            if(solve(i)>=n){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}