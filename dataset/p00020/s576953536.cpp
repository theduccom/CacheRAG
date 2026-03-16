#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

char c[1000000];
string s;

signed main()
{
    getline( cin, s );
    int  i = 0;
    while( i != s.size() )
    {
        printf( "%c", toupper( s[i] ) );
        i++;
    }
    printf("\n");
    return 0;
}
