#include <bits/stdc++.h>
#define endl    '\n'
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    if (a == 0 && b == 1 || b == 0 && c == 0) {
        cout << "Close";
    } else {
        cout << "Open";
    }
    cout << endl;

    return 0;
}


