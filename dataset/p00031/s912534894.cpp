#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000
typedef long long ll;

int main(void) {
    int n;
    while (cin >> n) {
        vector<int> ans;
        while (n > 0) {
            int p = 512;
            while (p > n) p /= 2;
            n -= p;
            ans.push_back(p);
        }
        cout << ans[ans.size()-1];
        for (int i = ans.size()-2; i >= 0 ; i--) {
            cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}