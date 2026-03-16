#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    while (cin >> w) {
        vector<int> v;
        for (int i = 0; i <= 9; i++) {
            if (w >> i & 1) {
                v.push_back(1<<i);
            }
        }
        for (int i = 0; i < (int)v.size(); i++) {
            if (i > 0) cout << " ";
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}