#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s, a;
    int sa_sum = 0, num_sum = 0, n = 0;
    while( scanf( "%d,%d", &s, &a ) != -1 ) {
        sa_sum += s * a;
        num_sum += a;
        ++n;
    }

    cout << sa_sum << endl;
    cout << round( static_cast<double>(num_sum) / n ) << endl;
}