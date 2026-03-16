#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <map>
#define loop(i,a,b) for(int i=a; i<b; i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()

using namespace std;

typedef vector<int> vi;

int main(){
    map<string, vi> m;
    string s; int n;
    while (cin >> s >> n){
        m[s].push_back(n);
    }
    for (auto e : m){
        sort(all(e.second));
        cout << e.first << endl;
        rep(i, e.second.size() - 1){
            cout << e.second[i] << " ";
        }
        cout << e.second.back() << endl;
    }
}