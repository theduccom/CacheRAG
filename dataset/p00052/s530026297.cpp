#include <iostream>
 
using namespace std;
typedef unsigned long long int ull;
 
int main()
{
    ull const by[] = { 5, 25, 125, 625, 3125, 15625, 78125, 390625, 1953125, 9765625, 48828125, 244140625, 1220703125 };
 
    ull n;
    while( cin >> n, n ) {
        ull t = 0;
        for( auto const& i : by ) {
            t += n / i;
        }
        cout << t << endl;
    }
}