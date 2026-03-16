#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; ++i)
#define rep2(i, n) for(int i = 1; i <= (int)n; ++i)
#define repit(it, t) for(__typeof((t).begin()) it = (t).begin(); it != (t).end(); it++)

#define pb push_back
#define lb lower_bound
#define mp make_pair
#define ite iterator
#define ul unsigned long
#define ull unsigned long long
#define INF 1000000007
#define MOD 1000000007
#define EPS 1.0e-6
#define fs first
#define sd second

template<typename T>
bool elem(set<T> st, T val){
	return (st.find(val) != st.end());
}

template<typename T>
void printv(vector<T> vt){
    if(vt.size() == 0) return;
    rep(i, vt.size() - 1)
        cout << vt[i] << " ";
    cout << vt[vt.size() - 1] << endl;
}

typedef vector<int> vint;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef pair<int, int> pii;

int main(void){
    ios::sync_with_stdio(false);
    string s;
    int ret = 0;
    while(cin >> s){
        string s0 = s;
        reverse(s.begin(), s.end());
        if(s == s0) ret++;
    }
    cout << ret << endl;
    return 0;
}