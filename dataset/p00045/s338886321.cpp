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

int main(){
    int m,n;
    char a;
    ll count=0;
    ll sumAll=0,sum=0;
    while(cin>>m>>a>>n){
        sumAll+=m*n;
        sum+=n;
        count++;
    }
    cout<<sumAll<<endl;
    cout<<(int)((double)(sum)/count+0.5)<<endl;
    return 0;
}