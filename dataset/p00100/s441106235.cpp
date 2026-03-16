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
using namespace std;
#define INF 100000000
#define MAXN 4096
typedef long long ll;
bool done[MAXN];
vector<int> syain;
int main(void) {
    int n;
    while (1) {
        cin >> n;
        int flag = 0;
        if (n == 0) break;
        map<ll, ll> m;
        m.clear();
        syain.clear();
        for (int i = 0; i < MAXN; i++) done[i] = false;
        for (int i = 0; i < n; i++) {
            ll bango, tanka, num;
            cin >> bango >> tanka >> num;
            if (!done[bango]) {
                done[bango] = true;
                syain.push_back(bango);
            }
            m[bango] += (m[bango] >= 1000000) ? 0 : tanka * num;
        }
        for (int i = 0; i < syain.size(); i++) {
            if (m[syain[i]] >= 1000000) {
                cout << syain[i] << endl;
                flag = 1;
            }
        }
        if (flag == 0) cout << "NA" << endl;
    }
    return 0;
}