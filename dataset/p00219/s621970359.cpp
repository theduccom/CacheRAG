#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while ( cin >> N, N != 0 ) {
        int cnt[10] = {};
        for ( int i = 0; i < N; i++ ) {
            int a;
            cin >> a;
            cnt[a]++;
        }
        for ( int i = 0; i < 10; i++ ) {
            if ( cnt[i] == 0 ) {
                cout << "-" << endl;
            } else {
                for ( int j = 0; j < cnt[i]; j++ ) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }

    return ( 0 );
}

