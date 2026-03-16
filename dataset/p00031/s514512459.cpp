#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        vector<int> a;
        for (int i = 9; i >= 0; --i) {
            if (!n) break;
            if ((1 << i) <= n) {
                n -= 1 << i;
                a.push_back(1<<i);
            }
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < a.size(); ++i) printf(i == a.size() - 1 ? "%d\n" : "%d ", a[i]);
    }
}