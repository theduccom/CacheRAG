#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if ( c == 1 || a == 1 && b == 1 ) {
        cout << "Open" << endl;
    } else {
        cout << "Close" << endl;
    }

    return ( 0 );
}

