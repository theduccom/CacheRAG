#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n, n) {
        int p, d1, d2, mp, md = 0;
        for (int i=0; i<n; ++i) {
            cin >> p >> d1 >> d2;
            if (md < d1 + d2) {
                mp = p;
                md = d1 + d2;
            }
        }
        cout << mp << " " << md << endl;
    }
    return 0;
}