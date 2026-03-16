#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <cassert>
using namespace std;

#define GET_ARG(a,b,c,F,...) F
#define REP3(i,s,e) for (i = s; i <= e; i++)
#define REP2(i,n) REP3 (i,0,(int)(n)-1)
#define REP(...) GET_ARG (__VA_ARGS__,REP3,REP2) (__VA_ARGS__)
#define RREP3(i,s,e) for (i = s; i >= e; i--)
#define RREP2(i,n) RREP3 (i,(int)(n)-1,0)
#define RREP(...) GET_ARG (__VA_ARGS__,RREP3,RREP2) (__VA_ARGS__)
#define DEBUG(x) cerr << #x ": " << x << endl

typedef long long ll;

constexpr char INF = 100;
constexpr int MOD = 1e9+7;

map<int,int> cnt;
int nxt[] = {1,-1,4,-4};

int main(void) {
    int i, j, k;
    cnt[1234567] = 0;
    queue<string> q;
    q.push("01234567");
    while (!q.empty()) {
        string s = q.front();
        q.pop();
        REP (i,8) if (s[i] == '0') REP (k,4) {
            string t = s;
            j = i + nxt[k];
            if (j < 0 || j >= 8 || i+j == 7) continue;
            swap(t[i],t[j]);
            if (!cnt.count(stoi(t)) || cnt[stoi(t)] > cnt[stoi(s)] + 1) {
                cnt[stoi(t)] = cnt[stoi(s)] + 1;
                q.push(t);
            }
        }
    }
    while (true) {
        int i, a, x = 0;
        for (i = 0; i < 8 && cin >> a; i++) x = x * 10 + a;
        if (x == 0) break;
        cout << cnt[x] << endl;
    }
    return 0;
}