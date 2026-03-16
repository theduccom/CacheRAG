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

bool isPrime(int n){
    if(n==2)return true;
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n;
    while(cin>>n){
        for(int i=n-1;i>=2;i--){
            if(isPrime(i)){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=n+1;i<100000;i++){
            if(isPrime(i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}