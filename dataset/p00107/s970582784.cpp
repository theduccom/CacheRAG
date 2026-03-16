#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define REP(i, n) for ( int i = 0; i < n; i++ )

using namespace std;

int main() {
    int n;
    vector<int> s(3);

    while ( cin >> s[0] >> s[1] >> s[2] >> n, s[0] || s[1] || s[2] ) {
        sort(s.begin(), s.end());

        // REP(i, 3) cout << s[i] << " ";
        // cout << endl;

        double size = sqrt(s[0] * s[0] + s[1] * s[1]);

        // cout << size << " " << (s[0] * s[0]) << " " << (s[1] * s[1]) << endl;

        REP(i, n) {
            double r;
            cin >> r;
            // cout << "r:" << r*2 << " size:" << size << " r<size:" << (r*2<size) << endl;
            if ( r * 2 <= size )
                cout << "NA";
            else
                cout << "OK";
            cout << endl;

        }

    }

    return 0;
}