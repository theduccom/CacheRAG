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
const int N = 10;

int main(){
    int n;
    while(cin >>n && n){
        int ans = 0;
        while(n >= 5){
            n /= 5;
            ans += n;
        }
        cout <<ans <<endl;
    }
    return 0;
}