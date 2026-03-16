#include <iostream>

using namespace std;
typedef unsigned long long int ull;

int main()
{
    const int PN=104729+1;
    bool checked[PN] = {};
    const int N=10000+1;
    ull s[N] = {};

    for( int i=2, l=1; i<PN; ++i )
    {
        if ( !checked[i] ) {
            for( int j=i; j<PN; j+=i ) {
                checked[j] = true;
            }
            s[l] = s[l-1] + i;
            ++l;
        }
    }

    int n;
    while( cin >> n, n ) {
        cout << s[n] << endl;
    }
}