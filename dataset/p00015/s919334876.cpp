#include <vector>
#include <iostream>
#include <set>
#include <cstdio>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cmath>
#include <complex>
#include <algorithm>
#include <tuple>
#include <algorithm>
#include <limits>
#include <map>
#include <valarray>
#include <list>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == "0" && s2 == "0") {
            cout << "0" << endl;
            continue;
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int n = max(s1.size(), s2.size()) + 1;
        for (int i = s1.size(); i < n; i++) {
            s1 += '0';
        }
        for (int i = s2.size(); i < n; i++) {
            s2 += '0';
        }
        string res;
        int b = 0;
        for (int i = 0; i < max(s1.size(), s2.size()); i++) {
            int u = s1[i]-'0'+s2[i]-'0'+ b;
            b = (u >= 10); u %= 10;
            res += u + '0';
        }
        reverse(res.begin(), res.end());
        string res2;
        int j = 0;
        while (res[j] == '0') j++;
        for (; j < res.size(); j++) {
            res2 += res[j];
        }
        if (res2.size() > 80) {
            cout << "overflow" << endl;
        } else {
            cout << res2 << endl;
        }
    }
}