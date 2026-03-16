#include <bits/stdc++.h>

using namespace std;

int main() {

    float n;
    vector<float> m;

    while(cin >> n) {
        m.push_back(n);
    }

    sort(m.begin(), m.begin() + m.size(), greater<float>());

    printf("%.1f\n", m[0] - m[m.size() - 1]);

}