#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;
typedef long long ll;

int n, x;
int ps[40];

bool isp[1000010];
void sieve(){
    const int N = 1000000;
    memset(isp, true, sizeof(isp));
    
    isp[0] = false;
    isp[1] = true;
    
    for(int p=2;p*p<=N;p++)if(isp[p]){
        for(int j=p*p;j<=N;j+=p)isp[j] = false;
    }
}

bool can[1000010];
void gen(){
    memset(can, false, sizeof(can));
    can[0] = true;
    
    for(int sum=0;sum<x;sum++){
        for(int i=0;i<n;i++){
            if(sum + ps[i] <= x){
                can[sum + ps[i]] |= can[sum];
            }
        }
    }
}


int main(){
    sieve();
    
    while(cin >> n >> x){
        if(n == 0 && x == 0)break;
        
        for(int i=0;i<n;i++)cin >> ps[i];
        gen();
    
        int res = -1;
        for(int sum=x;sum>=1;sum--)if(can[sum] && isp[sum]){
            res = sum;
            break;
        }
        
        if(res == -1){
            cout << "NA" << endl;
        } else {
            cout << res << endl;
        }
    }
    
    return 0;
}