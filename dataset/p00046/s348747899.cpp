#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;

typedef istringstream ISS;
typedef ostringstream OSS;
typedef vector <string> VS;
typedef vector <int> VI;
typedef vector <VI> VVI;
typedef vector <double> VD;
template <class T> T gcd( T a, T b ) { return !b ? a : gcd( b, a % b ); }
template <class T> T lcm( T a, T b ){ return a / gcd( a, b ) * b; }
template <class T> string print_v( vector<T> v ) { OSS oss; for ( typename vector<T>::iterator it_i = v.begin(); it_i != v.end(); ++ it_i ) { oss << *it_i << ", "; } return oss.str(); }

int main() {
    VD list;
    double height;
    while ( cin >> height ) list.push_back( height );
    cout << *max_element( list.begin(), list.end() ) - *min_element( list.begin(), list.end() ) << endl;
    return 0;
}