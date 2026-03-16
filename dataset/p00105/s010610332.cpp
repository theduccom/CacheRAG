#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl
#define printV(v) for(int zxc=0;zxc<v.size()-1;zxc++){cout << v[zxc] << " ";} cout << v.back() << endl;

int main() {
    map<string, vector<int>> dic;
    string s;
    int page;
    while (cin >> s) {
        cin >> page;
        dic[s].push_back(page);
    }
    vector<pair<string, vector<int>>> dic_s;
    for (auto itr = dic.begin(); itr != dic.end(); itr++) {
        dic_s.push_back(make_pair(itr->first, itr->second));
    }
    sort(ALL(dic_s));
    REP(i, dic_s.size()) {
        vector<int> v = dic_s[i].second;
        cout << dic_s[i].first << endl;
        sort(ALL(v));
        printV(v);
    }
    return 0;
}