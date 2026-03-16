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

int main(){
    int bef = 4280, n;
    while(cin >>n && n != -1){
        int aft = 1150;
        n = max(0, n - 10);
        REP(i, 10){
            if(!n) break;
            aft += 125;
            n--;
        }
        REP(i, 10){
            if(!n) break;
            aft += 140;
            n--;
        }
        aft += (n * 160);
        cout <<bef - aft<<endl;
    }
    return 0;
}