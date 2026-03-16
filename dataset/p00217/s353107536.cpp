#include <bits/stdc++.h>
#define endl    '\n'
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    int id, d1, d2;
    int max_id, max_v;

    cin >> n;

    while (n != 0) {
        max_v = -1;

        for (int i = 0; i < n; i++) {
            cin >> id >> d1 >> d2;

            if (max_v < d1 + d2) {
                max_id = id;
                max_v  = d1 + d2;
            }
        }

        cout << max_id << " " << max_v << endl;

        cin >> n;
    }

    return 0;
}


