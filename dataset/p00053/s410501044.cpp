#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<climits>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
#define P pair<int, int>
const int INF = INT_MAX / 2;
const int N = 1000000;

int isprime[N];
vector<int> prime;

void makePrime(){
    REP(i, N) isprime[i] = true;
    isprime[0] = false;
    isprime[1] = false;

    for(int i = 2; i < N; i++){
        if(!isprime[i]) continue;
        prime.push_back(i);
        for(int j = i + i; j < N; j += i) isprime[j] = false;
    }
}

int main(){
    makePrime();
    int n;
    while(cin >>n && n){
        int ans = 0;
        REP(i, n) ans += prime[i];
        cout <<ans <<endl;
    }
    return 0;
}