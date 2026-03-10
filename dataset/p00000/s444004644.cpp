#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
typedef vector<int> VI;
#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )

int main() {
    REP(i, 1, 10) {
        REP(j, 1, 10) {
            cout << i << "x" << j << "=" << i * j << endl;
        }
    }
        
    return 0;
}