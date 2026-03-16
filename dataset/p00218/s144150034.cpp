#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while ( cin >> N, N != 0 ) {
        for ( int i = 0; i < N; i++ ) {
            int a, b, c;
            cin >> a >> b >> c;
            if ( a + b + c >= 240 || a + b >= 180 || a == 100 || b == 100 || c == 100 ) {
                cout << "A" << endl;
            } else if ( a + b + c >= 210 || (a + b + c >= 150 && (a >= 80 || b >= 80)) ) {
                cout << "B" << endl;
            } else {
                cout << "C" << endl;
            }
        }
    }
    return ( 0 );
}

