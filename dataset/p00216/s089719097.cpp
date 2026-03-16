#include <bits/stdc++.h>
using namespace std;

int main()
{
    int W;

    while ( cin >> W , W != -1 ) {
        cout << 3130 - (min(10, max(0, W - 10)) * 125 + min(10, max(0, W - 20)) * 140 + max(0, W - 30) * 160) << endl;
    }
    return ( 0 );
}

