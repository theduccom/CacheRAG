#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()
#define mp make_pair
#define pb push_back
#define P first
#define I second

using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;

const int INF = 1 << 24;

const string p[2] = {"apple", "peach"};

int main(void){
    string in; getline(cin, in);

    pii pos = mp(0, 0);
    while(1){
        int res_ind = INF;
        rep(i, 2){
            int ind = in.find(p[i], pos.P);
            if(~ind && ind < res_ind) res_ind = ind, pos.I = i;
        }
        if(res_ind == INF) break;
        pos.P = res_ind;

        in.replace(pos.P ++, p[pos.I].size(), p[(!pos.I)]);
    }
    cout << in << endl;

    return 0;
}