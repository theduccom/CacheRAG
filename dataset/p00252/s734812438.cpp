//#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <utility>
#include <climits>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define F first
#define S second
#define OUT(x) cout << x << "\n"
#define int long long
using namespace std;
using point = pair< int,int >;

signed main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a && b && !c || !a && !b && c) {
        OUT("Open");
    } else {
        OUT("Close");
    }
    return 0;
}


