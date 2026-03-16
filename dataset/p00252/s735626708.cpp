#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd( ll x, ll y );
ll lcm( ll x, ll y );

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ( a == 1 && b == 1 || c == 1 ) {
        printf("Open\n");
    } else {
        printf("Close\n");
    }

    return 0;
}

ll gcd( ll x, ll y )
{
    if ( y == 0 ) return x;
    return gcd( y, x % y );
}

ll lcm( ll x, ll y )
{
    return x / gcd( x, y ) * y;
}

